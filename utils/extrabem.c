#include <stdio.h>
#include <math.h>

#include "fakecomplex.h"

/*
  Routine de Benoit. Modifiee par Christophe.

  Extrapole differentes grandeurs sur une sphere, a partir du champ 
  electrique et de sa derivee exterieure sur des patches rectangulaires 
  (formant une boite).
*/

#define pi    3.14159265359
#define mu0   4.e-7*pi
#define eps0  8.85434e-12
#define Nmax  100000

void green(double k,double x,double y,double z,complex *c){
  double r; 
  
  r=sqrt(x*x+y*y+z*z);
  *c=Cdiv(fltoco(cos(k*r),-sin(k*r)),fltoco(4*pi*r,0.0));
}

void dgreen(double k,double x,double y,double z,complex *c){
  complex  c1, c2, c3;
  double   r;
  
  r=sqrt(x*x+y*y+z*z);
  c1=fltoco(cos(k*r),-sin(k*r));
  c2 = Cdiv(fltoco(1,k*r),fltoco(r*r,0.0));
  c3=Cprod(c1,c2);
  c[0]=Cprod(c3,fltoco(x/(4*pi*r),0.0));
  c[1]=Cprod(c3,fltoco(y/(4*pi*r),0.0));
  c[2]=Cprod(c3,fltoco(z/(4*pi*r),0.0));
}


void cal_integralterm(double x, double y, double z, double k, 
		      double nx, double ny, double nz,
		      double exr, double eyr, double ezr, 
		      double exi, double eyi, double ezi,
		      double dexr, double deyr, double dezr, 
		      double dexi, double deyi, double dezi,
		      complex ep[3]){

  complex g, dg[3], nve[3], npe, nvedg[3], nvde[3] ;

  green(k,x,y,z,&g);
  dgreen(k,x,y,z,&(dg[0]));
  
  /* (n x de) G */
  nvde[0] = Csub(Cprod(fltoco(ny,0),fltoco(dezr,dezi)),
		 Cprod(fltoco(deyr,deyi),fltoco(nz,0)));
  nvde[1] = Csub(Cprod(fltoco(nz,0),fltoco(dexr,dexi)),
		 Cprod(fltoco(dezr,dezi),fltoco(nx,0)));
  nvde[2] = Csub(Cprod(fltoco(nx,0),fltoco(deyr,deyi)),
		 Cprod(fltoco(dexr,dexi),fltoco(ny,0)));	
  Cisum(&(ep[0]),Cprod(g,nvde[0]));
  Cisum(&(ep[1]),Cprod(g,nvde[1]));
  Cisum(&(ep[2]),Cprod(g,nvde[2]));
  
  /* n.e dG */
  npe.r = npe.i = 0.0;
  Cisum(&npe,Cprodr(nx,fltoco(exr,exi)));
  Cisum(&npe,Cprodr(ny,fltoco(eyr,eyi)));
  Cisum(&npe,Cprodr(nz,fltoco(ezr,ezi)));
  Cisum(&(ep[0]),Cprod(npe,dg[0]));
  Cisum(&(ep[1]),Cprod(npe,dg[1]));
  Cisum(&(ep[2]),Cprod(npe,dg[2]));
  
  /* (n x e)  x dG */
  nve[0] = Csub(Cprod(fltoco(ny,0),fltoco(ezr,ezi)),
		Cprod(fltoco(eyr,eyi),fltoco(nz,0)));
  nve[1] = Csub(Cprod(fltoco(nz,0),fltoco(exr,exi)),
		Cprod(fltoco(ezr,ezi),fltoco(nx,0)));
  nve[2] = Csub(Cprod(fltoco(nx,0),fltoco(eyr,eyi)),
		Cprod(fltoco(exr,exi),fltoco(ny,0)));	
  nvedg[0] = Csub(Cprod(nve[1],dg[2]),Cprod(dg[1],nve[2]));
  nvedg[1] = Csub(Cprod(nve[2],dg[0]),Cprod(dg[2],nve[0]));
  nvedg[2] = Csub(Cprod(nve[0],dg[1]),Cprod(dg[0],nve[1]));	

  Cisum(&(ep[0]),nvedg[0]);
  Cisum(&(ep[1]),nvedg[1]);
  Cisum(&(ep[2]),nvedg[2]);

}


void main(int argc, char *argv[]){
  int      i, l, m, dum, ntheta, nphi, n1, n2, n3;
  double   ecarre, ecarre_max ;
  double   k, freq, om, theta0, theta1, phi0, phi1, dtheta, dphi ;
  double   rp, xc, yc, zc, xp, yp, zp ;
  double   x, y, z, npvec, npx, npy, npz, lnpvec;
  double   s, xq[Nmax], yq[Nmax], zq[Nmax], nx[Nmax], ny[Nmax], nz[Nmax];
  double   exr[Nmax], eyr[Nmax], ezr[Nmax], exi[Nmax], eyi[Nmax], ezi[Nmax];
  double   sxr[Nmax], syr[Nmax], szr[Nmax], sxi[Nmax], syi[Nmax], szi[Nmax];
  double   dexr[Nmax], deyr[Nmax], dezr[Nmax], dexi[Nmax], deyi[Nmax], dezi[Nmax];
  double   ints, spoy, gain, intsphe ;
  complex  c1, c2, c3, c4, ep[3], eptot[3], npve[3];  
  FILE    *pf1, *pf2, *pfs, *pf3;
  
  if(argc!=16){
    fprintf(stderr, "Usage: extrabem e de out f surf xc yc zc r\n"
	            "       thet0 thet1 n phi0 phi1 n\n");
    exit(1);
  }
  
  if(!(pf1 = fopen(argv[1],"r"))){
    fprintf(stderr, "Unable to open file '%s'\n", argv[1]);
    exit(1);
  }
  if(!(pf2 = fopen(argv[2],"r"))){
    fprintf(stderr, "Unable to open file '%s'\n", argv[2]);
    exit(1);
  }
  if(!(pf3 = fopen(argv[3],"w"))){
    fprintf(stderr, "Unable to open file '%s'\n", argv[3]);
    exit(1);
  }
  /*
  if(!(pfs = fopen(argv[3],"r"))){
    fprintf(stderr, "Unable to open file '%s'\n", argv[2]);
    exit(1);
  }
  */

  freq       = atof(argv[4]) ;
  s          = atof(argv[5]) ;
  xc         = atof(argv[6]) ;
  yc         = atof(argv[7]) ;
  zc         = atof(argv[8]) ;
  rp         = atof(argv[9]) ;
  theta0     = pi/180. * atof(argv[10]) ;
  theta1     = pi/180. * atof(argv[11]) ;
  ntheta     = atoi(argv[12]) ;
  phi0       = pi/180. * atof(argv[13]) ;
  phi1       = pi/180. * atof(argv[14]) ;
  nphi       = atoi(argv[15]) ;

  if(!ntheta || !nphi){
    fprintf(stderr, "Error: ntheta or nphi == 0\n");
    exit(1);
  }

  printf("Freq=%g, SurfPatch=%g, Center=%g,%g,%g, Radius=%g, Theta=[%g,%g], "
	 "NbTheta=%d, Phi=[%g,%g], NbPhi=%d\n",
	 freq, s, xc, yc, zc, rp, theta0, theta1, ntheta, phi0, phi1, nphi);

  om = 2.0*pi*freq;
  k = om*sqrt(mu0*eps0);
  
  n1 = 0;
  while(fscanf(pf1,"%d %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf\n",
	       &dum, &xq[n1], &yq[n1], &zq[n1], &nx[n1], &ny[n1], &nz[n1],
	       &exr[n1], &eyr[n1], &ezr[n1], &exi[n1], &eyi[n1], &ezi[n1]) != EOF){
    /*
    printf("%d %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf \n",
           dum, xq[n1],yq[n1],zq[n1], nx[n1],ny[n1],nz[n1],
	   exr[n1],eyr[n1],ezr[n1],exi[n1],eyi[n1],ezi[n1]) ;
	   */
    if(n1==Nmax){
      fprintf(stderr, "Error: too many patches\n");
      exit(1);
    }
    n1++;
  }

  n2=0;
  while(fscanf(pf2,"%d %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf",
	       &dum, &xq[n2],&yq[n2],&zq[n2], &nx[n2],&ny[n2],&nz[n2],
	       &dexr[n2],&deyr[n2],&dezr[n2],&dexi[n2],&deyi[n2],&dezi[n2])!=EOF){
    /*
    printf("%d %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf \n",
	   dum, xq[n2],yq[n2],zq[n2], nx[n2],ny[n2],nz[n2],
	   dexr[n2],deyr[n2],dezr[n2],dexi[n2],deyi[n2],dezi[n2]) ;
	   */
    n2++;
  }

  n3=0; ints = 0.0 ;
  /*
  while(fscanf(pfs,"%d %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf",
	       &dum, &xq[n3],&yq[n3],&zq[n3], &nx[n3],&ny[n3],&nz[n3],
	       &sxr[n3],&syr[n3],&szr[n3],&sxi[n3],&syi[n3],&szi[n3])!=EOF){
    ints += s * (nx[n3]*sxr[n3]+ny[n3]*syr[n3]+nz[n3]*szr[n3]) ;
    n3++;
  }
  */

  if(n1 != n2){
    printf("nombre de points different pour e et de : %d != %d\n", n1, n2);
    exit(1);
  }
  else{
    printf("nombre de patchs : %d %d %d\n",n1, n2, n3);
  }

  dtheta = (theta1-theta0) / (double)ntheta ;
  dphi   = (phi1-phi0) / (double)nphi ;

  ecarre_max = intsphe = 0.0 ;
  
  for(l=0 ; l<ntheta ; l++){
    
    for(m=0 ; m<nphi ; m++){

      xp = xc + rp * sin(theta0+(double)l*dtheta) * cos(phi0+(double)m*dphi);
      yp = yc + rp * sin(theta0+(double)l*dtheta) * sin(phi0+(double)m*dphi);
      zp = zc + rp * cos(theta0+(double)l*dtheta) ;

      npx=(xp-xc)/rp;
      npy=(yp-yc)/rp;
      npz=(zp-zc)/rp;
      
      eptot[0].r = eptot[0].i = 0. ;
      eptot[1].r = eptot[1].i = 0. ; 
      eptot[2].r = eptot[2].i = 0. ;
      
      for(i=0;i<n1;i++){ /* boucle sur les patches */
	ep[0].r = ep[0].i = 0. ;
	ep[1].r = ep[1].i = 0. ;
	ep[2].r = ep[2].i = 0. ;

	x = xp - xq[i];
	y = yp - yq[i];
	z = zp - zq[i];
	cal_integralterm(x, y, z, k,
			 nx[i],ny[i],nz[i],
			 exr[i],eyr[i],ezr[i],exi[i],eyi[i],ezi[i],
			 dexr[i],deyr[i],dezr[i],dexi[i],deyi[i],dezi[i],
			 ep) ;

	/*
	switch(symmetry){
	case 0 : break ;
	case 1 : x = xp - (-xq[i]-2*symdist); nx[i] *= -1 ; break ;
	case 2 : y = yp - (-yq[i]-2*symdist); ny[i] *= -1 ; break ;
	case 3 : 
	  z = zp - (-zq[i]-2*symdist) ; 
	  nz[i] *= -1 ; 
	  exr[i] *= -1 ; 
	  exi[i] *= -1 ;	  
	  eyr[i] *= -1 ; 
	  eyi[i] *= -1 ;	  
	  break ;
	default : fprintf(stderr, "Unknown symmetry\n"); exit(1);
	}
	if(symmetry){
	  cal_integralterm(x,y,z,k,
			   nx[i],ny[i],nz[i],
			   exr[i],eyr[i],ezr[i],exi[i],eyi[i],ezi[i],
			   dexr[i],deyr[i],dezr[i],dexi[i],deyi[i],dezi[i],
			   ep) ;
	}

	switch(symmetry){
	case 0 : break ;
	case 1 : 
	  nx[i] *= -1 ; 
	  break ;
	case 2 : 
	  ny[i] *= -1 ; 
	  break ;
	case 3 : 
	  nz[i] *= -1 ; 
	  exr[i] *= -1 ; 
	  exi[i] *= -1 ;	  
	  eyr[i] *= -1 ; 
	  eyi[i] *= -1 ;	  
	  break ;
	default : fprintf(stderr, "Unknown symmetry\n"); exit(1);
	}
	*/
  
	/* multiplication par la surface */
	Ciprod(&(ep[0]),fltoco(s,0.0));
	Ciprod(&(ep[1]),fltoco(s,0.0));
	Ciprod(&(ep[2]),fltoco(s,0.0));
	
	/* eptot = sum of ep on all patches */
	Cisum(&(eptot[0]),ep[0]);
	Cisum(&(eptot[1]),ep[1]);
	Cisum(&(eptot[2]),ep[2]);

      } /* for i */
      
      fprintf(stderr, "%d %d  \r",l, m);

      ecarre = 
	eptot[0].r * eptot[0].r +
	eptot[0].i * eptot[0].i +
	eptot[1].r * eptot[1].r +
	eptot[1].i * eptot[1].i +
	eptot[2].r * eptot[2].r +
	eptot[2].i * eptot[2].i ;

      if(ecarre > ecarre_max) ecarre_max = ecarre ;

      npve[0] = Csub(Cprod(fltoco(npy,0),eptot[2]),Cprod(eptot[1],fltoco(npz,0)));
      npve[1] = Csub(Cprod(fltoco(npz,0),eptot[0]),Cprod(eptot[2],fltoco(npx,0)));
      npve[2] = Csub(Cprod(fltoco(npx,0),eptot[1]),Cprod(eptot[0],fltoco(npy,0)));

      npvec = 
	npve[0].r * npve[0].r +
	npve[1].r * npve[1].r +
	npve[2].r * npve[2].r +
	npve[0].i * npve[0].i +
	npve[1].i * npve[1].i +
	npve[2].i * npve[2].i ;

      /*
      spoy = npvec / (120*pi) ;
      gain = 4*pi*rp*rp * spoy / (ints/(2*pi*freq*mu0)) ;
      */

      intsphe += npvec * rp*rp * sin(theta0+(double)l*dtheta) * dtheta * dphi ;

#if 0      
      fprintf(pf3,
	      "%12.5e %12.5e %12.5e "
	      "%12.5e "
	      "%12.5e %12.5e %12.5e %12.5e %12.5e %12.5e "
	      "%12.5e %12.5e "
	      "%12.5e %12.5e %12.5e\n",
	      xp,yp,zp,
	      (double)l*dtheta,
	      (double)l*dphi,
	      eptot[0].r,eptot[1].r,eptot[2].r,eptot[0].i,eptot[1].i,eptot[2].i,
	      ecarre,npvec,
	      npvec*npx,npvec*npy,npvec*npz);
#endif
      xp = ecarre * sin(theta0+(double)l*dtheta) * cos(phi0+(double)m*dphi);
      yp = ecarre * sin(theta0+(double)l*dtheta) * sin(phi0+(double)m*dphi);
      zp = ecarre * cos(theta0+(double)l*dtheta) ;
      fprintf(pf3,
	      "%12.5e %12.5e %12.5e %12.5e %12.5e %12.5e %12.5e \n",
	      (double)l*dtheta,(double)m*dphi,ecarre,xp,yp,zp,
	      npvec);
      fflush(pf3);

    }
    
    if(nphi>1) fprintf(pf3, "\n");
    
  }

  printf("\necarre_max max=%g, intsph_e=%g\n", ecarre_max, intsphe);  
}
