/* $Id: Pos_Iso.c,v 1.5 2000-10-16 12:32:04 geuzaine Exp $ */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include "Data_Active.h"
#include "ualloc.h"

#include "Pos_Element.h"
#include "Pos_Print.h"

/* ------------------------------------------------------------------------ */
/*  C o n t o u r G r i d                                                   */
/* ------------------------------------------------------------------------ */

/* This is a **MODIFIED** version from contour.c */

/* Vis5D version 5.2 */

/*
Vis5D system for visualizing five dimensional gridded data sets
Copyright (C) 1990 - 2000 Bill Hibbard, Johan Kellum, Brian Paul,
Dave Santek, and Andre Battaiola.

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 1, or (at your option)
any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

/* 2-D contouring function */


#define ABS( X )            ( (X) < 0 ? -(X) : (X) )
#define MIN2( X, Y )        ( (X) < (Y) ? (X) : (Y) )
#define MAX2( X, Y )        ( (X) > (Y) ? (X) : (Y) )
#define MIN4( W, X, Y, Z )  ( MIN2( MIN2(W,X), MIN2(Y,Z) ) )
#define MAX4( W, X, Y, Z )  ( MAX2( MAX2(W,X), MAX2(Y,Z) ) )

/* NINT(x) = if x > 0 then INT(x+0.5) else INT(x-0.5) endif */
#define NINT( X )           ( (X) >= 0 ? (int) ((X) + 0.5) : (int) ((X)-0.5) )

#define G( R, C )           ( g[ (C) * nr + (R) ] )
#define MARK( R, C )        ( mark[ (C) * nr + (R) ] )

/*
 * Size of temporary vertex arrays:  It would be more efficient memory-
 * wise to dynamically allocate the vx,vy,ipnt arrays to size maxv1+maxv2
 * but it would also be slower.
 */
#define MAXTEMP (MAXROWS*MAXCOLUMNS)

/* all returned vertices will be scaled to this region: */

#define XMIN 0.0
#define XMAX (nr-1)
#define YMIN 0.0
#define YMAX (nc-1)


/* MJK 12.10.98 begin */
/*
 * Plot a digit for a contour label in a vector font format.
 * Input:  digit - digit character
 *         row, col, hgt - position and size of digit.
 *         vx, vy - arrays to put vertices into.
 * Output:  vx, vy - the vertices of the label's digits.
 * Return:  number of vertices put into vx,vy.
 */
static int plot_digit (char digit, float row, float col, float hgt,
                       float vx[], float vy[] )
{
   static int lb[91] = { 0,
      105,102,80,20,02,05,27,87,105,85,103,3,1,5,87,105,102,80,
      60,7,0,87,105,102,80,70,52,54,52,30,20,2,5,27,104,57,50,100,0,
      100,107,67,62,40,20,2,5,27,80,102,105,87,27,5,2,20,30,52,57,
      107,100,4,105,102,80,70,52,55,37,27,5,2,20,30,52,55,77,87,105,
      27, 5,2,20,80,102,105,87,77,55,50 };
   static int lt[12] = { 0,
      1,10,15,22,35,40,49,60,63,80,91 };

   float        rs, cs, hl, he;
   int          i, ib, ie, llin, llel;
   int          num = 0;

   if ((digit < '0') || (digit > '9')) return 0;

   i  = digit - '0';
   ib = lt[i+1];
   ie = lt[i+2]-1;
   for (i=ib;i<=ie;i++) {
      llin = lb[i]/10;
      llel = lb[i]-llin*10;
      hl = hgt*llin;
      he = hgt*llel;
      if (i != ib) {
         vx[num] = rs;
         vy[num] = cs;
         num++;
         vx[num] = row-hl;
         vy[num] = col-he;
         num++;
      }
      rs = row-hl;
      cs = col-he;
   }


   return num;
}


static int plot_digit_wierd (char digit, float row, float col, float hgt, float h, 
                       float vx[], float vy[] )
{
   static int lb[91] = { 0,
      105,102,80,20,02,05,27,87,105,85,103,3,1,5,87,105,102,80,
      60,7,0,87,105,102,80,70,52,54,52,30,20,2,5,27,104,57,50,100,0,
      100,107,67,62,40,20,2,5,27,80,102,105,87,27,5,2,20,30,52,57,
      107,100,4,105,102,80,70,52,55,37,27,5,2,20,30,52,55,77,87,105,
      27, 5,2,20,80,102,105,87,77,55,50 };
   static int lt[12] = { 0,
      1,10,15,22,35,40,49,60,63,80,91 };

   float        rs, cs, hl, he;
   int          i, ib, ie, llin, llel;
   int          num = 0;

   if ((digit < '0') || (digit > '9')) return 0;

   i  = digit - '0';
   ib = lt[i+1];
   ie = lt[i+2]-1;
   for (i=ib;i<=ie;i++) {
      llin = lb[i]/10;
      llel = lb[i]-llin*10;
      hl = hgt*llin;
      he = h*llel;
      if (i != ib) {
         vx[num] = rs;
         vy[num] = cs;
         num++;
         vx[num] = row-hl;
         vy[num] = col-he;
         num++;
      }
      rs = row-hl;
      cs = col-he;
   }


   return num;
}

/*
 * Plot a contour label in a vector font format.
 *     Note: ROWS = XK TO XM, COLS = YK TO YM
 * Input:  lbl_str - string containing the contour label
 *         xk, yk, xm, ym - bounds for the label.
 *         vx, vy - arrays to put vertices into.
 * Output:  vx, vy - the vertices of the label's digits.
 * Return:  number of vertices put into vx,vy.
 */
static int plot_label (char *lbl_str, float xk, float yk, float xm, float ym,
                       float vx[], float vy[] )
{
   float        xmk, ymk, hgt, h, width, row, col, gap;
   int          i, len, idot;
   int          num = 0;

   if (lbl_str == NULL) return 0;
   if ((len = strlen (lbl_str)) == 0) return 0;

   width = len;
   idot  = -1;
   for (i = 0; i < len; i++)
   {
      if (lbl_str[i] == '.')
      {
         idot = i;
         width -= 0.5;
         break;
      }
   }
   if (lbl_str[0] == '-') width -= 0.5;


   if (xm < xk) col = xm, xm = xk, xk = col;
   if (ym < yk) row = ym, ym = yk, yk = row;
   xmk = xm - xk;
   ymk = ym - yk;

   hgt  = xmk/1.2;
   h    = ymk/(width+0.2);
   if (h < hgt) hgt=h;
   hgt *= 0.8; /* make the label slightly smaller than its box */
   h    = hgt/10.0;
   gap  = hgt * 0.2; /* gap between characters */

   row = xm - (0.5 * (xmk - hgt));
   col = ym - (0.5 * (ymk - (width * hgt))) - gap;

   i = len;
   if (idot >= 0)
   {
      while (--i > idot)
      {
         num += plot_digit (lbl_str[i], row, col, h, (vx+num), (vy+num));
         col -= hgt;
      }

      /* plot decimal cross */
      col += gap;
      vx[num] = row-0.1*hgt;
      vy[num] = col-0.2*hgt;
      num++;
      vx[num] = row-0.2*hgt;
      vy[num] = col-0.3*hgt;
      num++;
      vx[num] = row-0.2*hgt;
      vy[num] = col-0.2*hgt;
      num++;
      vx[num] = row-0.1*hgt;
      vy[num] = col-0.3*hgt;
      num++;
      col -= gap;
      /* half space for column of decimal cross */
      col -= 0.5*hgt;
   }

   while (--i >= 0)
   {
      if (lbl_str[i] != '-')
      {
         num += plot_digit (lbl_str[i], row, col, h, (vx+num), (vy+num));
         col -= hgt;
      }
      else
      {
         /* PLOT MINUS SIGN */
         vx[num] = row-0.5*hgt;
         vy[num] = col-0.4*hgt;
         num++;
         vx[num] = row-0.5*hgt;
         vy[num] = col;
         num++;
      }
   }

   return num;
}

static int plot_label_wierd (char *lbl_str, float xk, float yk, float xm, float ym,
                       float vx[], float vy[] )
{
   float        hr, hc, xmk, ymk, hgt, h, width, row, col, gap;
   int          i, len, idot;
   int          num = 0;

   if (lbl_str == NULL) return 0;
   if ((len = strlen (lbl_str)) == 0) return 0;

   width = len;
   idot  = -1;
   for (i = 0; i < len; i++)
   {
      if (lbl_str[i] == '.')
      {
         idot = i;
         width -= 0.5;
         break;
      }
   }
   if (lbl_str[0] == '-') width -= 0.5;


   if (xm < xk) col = xm, xm = xk, xk = col;
   if (ym < yk) row = ym, ym = yk, yk = row;
   xmk = xm - xk;
   ymk = ym - yk;

   hgt  = xmk/1.2;
   h    = ymk/(width+0.2);
   hgt *= 0.8; /* make the label slightly smaller than its box */
   hc    = h/10.0;
   hr    = hgt/10.0;
   gap  = h * 0.2; /* gap between characters */

   row = xm - (0.5 * (xmk - hgt));
   col = ym - (0.5 * (ymk - (width * h))) - gap;
  

   i = len;
   if (idot >= 0)
   {
      while (--i > idot)
      {
         num += plot_digit_wierd (lbl_str[i], row, col, hr, hc, (vx+num), (vy+num));
         col -= hgt;
      }

      /* plot decimal cross */
      col += gap;
      vx[num] = row-0.1*hgt;
      vy[num] = col-0.2*h;
      num++;
      vx[num] = row-0.2*hgt;
      vy[num] = col-0.3*h;
      num++;
      vx[num] = row-0.2*hgt;
      vy[num] = col-0.2*h;
      num++;
      vx[num] = row-0.1*hgt;
      vy[num] = col-0.3*h;
      num++;
      col -= gap;
      /* half space for column of decimal cross */
      col -= 0.5*h;
   }

   while (--i >= 0)
   {
      if (lbl_str[i] != '-')
      {
         num += plot_digit_wierd (lbl_str[i], row, col, hr, hc, (vx+num), (vy+num));
         col -= h;
      }
      else
      {
         /* PLOT MINUS SIGN */
         vx[num] = row-0.5*hgt;
         vy[num] = col-0.4*h;
         num++;
         vx[num] = row-0.5*hgt;
         vy[num] = col;
         num++;
      }
   }

   return num;
}

/*
 * Compute contour lines for a 2-D array.  If the interval is negative,
 * then negative contour lines will be drawn as dashed lines.
 * The contour lines will be computed for all V such that:
 *           lowlimit <= V <= highlimit
 *     and   V = base + n*interval  for some integer n
 * Note that the input array, g, should be in column-major (FORTRAN) order.
 *
 * Input:  g - the 2-D array to contour.
 *         nr, nc - size of 2-D array in rows and columns.
 *         interval - the interval between contour lines.
 *         lowlimit - the lower limit on values to contour.
 *         highlimit - the upper limit on values to contour.
 *         base - base value to start contouring at.
 *         vx1, vy1 - arrays to put contour line vertices
 *         maxv1 - size of vx1, vy1 arrays
 *         numv1 - pointer to int to return number of vertices in vx1,vy1
 *         vx2, vy2 - arrays to put 'hidden' (by labels) contour line vertices
 *         maxv2 - size of vx2, vy2 arrays
 *         numv2 - pointer to int to return number of vertices in vx2,vy2
 *         vx3, vy3 - arrays to put contour label vertices
 *         maxv3 - size of vx3, vy3 arrays
 *         numv3 - pointer to int to return number of vertices in vx3,vy3
 * Return:  1 = ok
 *          0 = error  (interval==0.0 or out of memory)
 */
int contour( float g[], int nr, int nc,
	     float interval, float lowlimit, float highlimit,
	     float base, int ContFontFactorX, int ContFontFactorY,
	     float vx1[], float vy1[], float vv1[], int maxv1, int *numv1,
	     float vx2[], float vy2[], float vv2[], int maxv2, int *numv2,
	     float vx3[], float vy3[], float vv3[], int maxv3, int *numv3 )
{
   register int ir, ic;
   int nrm, ncm, idash, nbvert, ivert;
   int numc, il;
   int ffex, ffey, lr, lc, lc2, lrr, lr2, lcc;
   float xd, yd ,xx, yy;
   float clow, chi;
   float gg;
   float *vx, *vy, *vv;
   int *ipnt;
   int nump, ip;
   register int numv;
   char *mark;

   /* MJK 12.10.98 */
   char         lbl_str[10], lbl_fmt[40];
   int          lbl_len, lbl_dot;
   int use_resize;

   /* Dynamically allocate temp. arrays, to avoid using excessive
      stack space and crashing on some systems.  It's not going to be
      appreciably slower, since the caller (calc_hslice or
      calc_vslice) calls malloc at least 6 times anyway. calc_hslice
      and calc_vslice determine maxv1 & maxv2 based on an upper bound
      for the number of vertices derived from the code below. */
   const int maxtemp = maxv1 > maxv2 ? maxv1 : maxv2;
   vx = (float*) Malloc(sizeof(float)*maxtemp);
   vy = (float*) Malloc(sizeof(float)*maxtemp);

   if(vv1 && vv2 && vv3) 
     vv = (float*) Malloc(sizeof(float)*maxtemp);
   else
     vv = NULL ;

   ipnt = (int*) Malloc(sizeof(int)*((nr-1)*(nc-1) + 1)); /* see below loop */
   if (!vx || !vy || !ipnt) {
      Msg(WARNING, "You do not have enough memory to create contours");
      Free(vx); Free(vy); if(vv) Free(vv); Free(ipnt);
      return 0;
   }

   use_resize = 0;
   ffex = ffey = 0;

   if (ContFontFactorX != 0 ||
       ContFontFactorY != 0){
      use_resize = 1;
    }

   /* initialize vertex counts */
   *numv1 = *numv2 = *numv3 = 0;

   /* deduct 100 vertices from maxv3 now to save a later computation */
   maxv3 -= 100;

   if (interval==0.0) {
      /* bad contour interval */
      Free(vx); Free(vy); if(vv) Free(vv); Free(ipnt);
      return 0;
   }
   if (interval<0.0) {
      /* draw negative contour lines as dashed lines */
      interval = -interval;
      idash = 1;
   }
   else {
      idash = 0;
   }

   nrm = nr-1;
   ncm = nc-1;

   xd = (XMAX-XMIN)/(nr-1);
   yd = (YMAX-YMIN)/(nc-1);

   /*
    * set up mark array
    * mark= 0 if avail for label center,
    *       2 if in label, and
    *       1 if not available and not in label
    *
    * lr and lc give label size in grid boxes
    * lrr and lcc give unavailable radius
    */
   lr = 1+(nr-2)/50;
   lc = 1+(nc-2)/10;

   if (use_resize){
     ffex = ContFontFactorX;
     ffey = ContFontFactorY;

     if (ffey+lr > 0 && ffey+lr < nr-3 &&
	 ffex+lc > 0 && ffex+lc < nc-3){
       lr += ffey;
       lc += ffex;
     }
   }

   lc2 = lc/2;
   lr2 = lr/2;
   lrr = 1+(nr-2)/8;
   lcc = 1+(nc-2)/8;

   /* MJK 12.10.98 */
   sprintf (lbl_str, "%f", interval);
   lbl_len = strlen (lbl_str);
   while (lbl_str[--lbl_len] == '0') if (lbl_len == 0) break;
   lbl_dot = 0;
   if (lbl_len > 0)
   {
      while (lbl_str[lbl_len--] != '.')
      {
         if (lbl_len < 0) break;
         lbl_dot++;
      }
   }
   sprintf (lbl_fmt, "%%.%df", lbl_dot);






   /* allocate mark array */
   mark = (char *) Malloc( nr * nc * sizeof(char) );

   if (!mark) {
      Free(vx); Free(vy); if(vv) Free(vv); Free(ipnt);
      return 0;
   }

   /* initialize mark array to zeros */
   memset( mark, 0, nr*nc*sizeof(char) );

   /* set top and bottom rows to 1 */
   for (ic=0;ic<nc;ic++) {
      for (ir=0;ir<lr;ir++) {
         MARK(ir,ic) = 1;
/* WLH 12 Nov 98
         MARK(nr-ir-2,ic) = 1;
*/
         /* WLH 12 Nov 98 */
         MARK(nr-1-ir,ic) = 1;

      }
   }

   /* set left and right columns to 1 */
   for (ir=0;ir<nr;ir++) {
      for (ic=0;ic<lc;ic++) {
         MARK(ir,ic) = 1;
/* WLH 12 Nov 98
         MARK(ir,nc-ic-2) = 1;
*/
         /* WLH 12 Nov 98 */
         MARK(ir,nc-1-ic) = 1;

      }
   }
/*
   for (ir=0;ir<nr;ir++) {
      for (ic=0;ic<nc;ic++) {
         printf("%d ", (int) MARK(ir,ic) );
      }
      printf("\n");
   }
*/

   numv = nump = 0;
   /* compute contours */
   for (ir=0; ir<nrm && numv<maxtemp-8 && nump<2*maxtemp; ir++) {
      xx = xd*ir+XMIN;
      for (ic=0; ic<ncm && numv<maxtemp-8 && nump<2*maxtemp; ic++) {
         float ga, gb, gc, gd;
         float gv, gn, gx;
         register float tmp1, tmp2;

         /* save index of first vertex in this grid box */
         ipnt[nump++] = numv;

         yy = yd*ic+YMIN;

         /* get 4 corner values, skip box if any are missing */
         ga = G(ir,ic);
         if (ga > 1.e30 ) continue;
         gb = G(ir+1,ic);
         if (gb > 1.e30 ) continue;
         gc = G(ir,ic+1);
         if (gc > 1.e30 ) continue;
         gd = G(ir+1,ic+1);
         if (gd > 1.e30 ) continue;

         /* find average, min, and max of 4 corner values */
         gv = (ga+gb+gc+gd)/4.0;

         /*gn = MIN4(ga,gb,gc,gd);*/
         tmp1 = MIN2( ga, gb );
         tmp2 = MIN2( gc, gd );
         gn = MIN2( tmp1, tmp2 );

         /*gx = MAX4(ga,gb,gc,gd);*/
         tmp1 = MAX2( ga, gb );
         tmp2 = MAX2( gc, gd );
         gx = MAX2( tmp1, tmp2 );


         /* compute clow and chi, low and high contour values in the box */

         /* old method: */
         /* clow = interval*(NINT(gn/interval)-1);*/
/*         clow = base + interval*(NINT((gn-base)/interval)-1);*/
         tmp1 = (gn-base) / interval;
         clow = base + interval * (NINT(tmp1)-1);
         while (clow<gn) {
            clow += interval;
         }

         /* old method: */
         /*chi = interval*(NINT(gx/interval)+1);*/
/*         chi = base + interval*(NINT((gx-base)/interval)+1);*/
         tmp1 = (gx-base) / interval;
         chi = base + interval * (NINT(tmp1)+1);
         while (chi>gx) {
            chi -= interval;
         }

         /* how many contour lines in the box: */
/*         numc = 1+NINT((chi-clow)/interval);*/
         tmp1 = (chi-clow) / interval;
         numc = 1+NINT(tmp1);

         /* gg is current contour line value */
         gg = clow;

         for (il=0; il<numc && numv+8<maxtemp; il++, gg += interval) {
            float gba, gca, gdb, gdc;
            int ii;

            /* make sure gg is within contouring limits */
            if (gg < gn) continue;
            if (gg > gx) break;
            if (gg < lowlimit) continue;
            if (gg > highlimit) break;

            /* compute orientation of lines inside box */
            ii = 0;
            if (gg > ga) ii = 1;
            if (gg > gb) ii += 2;
            if (gg > gc) ii += 4;
            if (gg > gd) ii += 8;
            if (ii > 7) ii = 15 - ii;
            if (ii <= 0) continue;

            /* DO LABEL HERE*/
            if (MARK(ir,ic)==0) {
               int kc, kr, mc, mr, jc, jr;
               float xk, yk, xm, ym, value;

               /* Insert a label */

               /* BOX TO AVOID */
               kc = ic-lc2-lcc;
               kr = ir-lr2-lrr;
               mc = kc+2*lcc+lc-1;
               mr = kr+2*lrr+lr-1;
               /* OK here */
               for (jc=kc;jc<=mc;jc++) {
                  if (jc >= 0 && jc < nc) {
                     for (jr=kr;jr<=mr;jr++) {
                        if (jr >= 0 && jr < nr) {
                           if (MARK(jr,jc) != 2) {
                              MARK(jr,jc) = 1;
                           }
                        }
                     }
                  }
               }

               /* BOX TO HOLD LABEL */
               kc = ic-lc2;
               kr = ir-lr2;
               mc = kc+lc-1;
               mr = kr+lr-1;
               
               /* MJK 12.10.98 */
               sprintf (lbl_str, lbl_fmt, gg);
               lbl_len = strlen (lbl_str);


               /* MJK 2.22.99 */
               if (lbl_len+ffex >= 1){
                  lbl_len += ffex;
               }

               if (((lbl_dot) || (gg < 0.0)) && (lbl_len > 2)) lbl_len--;
               kc = ic - (lbl_len / 2);
               mc = kc + lbl_len - 1;




               for (jc=kc;jc<=mc;jc++) {
                  if (jc >= 0 && jc < nc) {
                     for (jr=kr;jr<=mr;jr++) {
                        if (jr >= 0 && jr < nr) {
                           MARK(jr,jc) = 2;
                        }
                     }
                  }
               }

               xk = xd*kr+XMIN;
               yk = yd*kc+YMIN;
               xm = xd*(mr+1.0)+XMIN;
               ym = yd*(mc+1.0)+YMIN;
               /* old method:  VALUE=CLOW+INTERVAL*FLOAT((NUMC-1)/2)*/
               value = gg;

               if (*numv3 < maxv3) {
                  /* if there's room in the array, plot the label */
                  /* MJK 12.10.98 */
		  if (use_resize){
		    nbvert = plot_label_wierd( lbl_str, xk, yk, xm, ym,
					       vx3+(*numv3), vy3+(*numv3) );
                  }
                  else{
		    nbvert = plot_label( lbl_str, xk, yk, xm, ym,
					 vx3+(*numv3), vy3+(*numv3) );
                  }

		  if(vv)
		    for(ivert=0 ; ivert < nbvert ; ivert++)
		      vv3[*numv3+ivert] = value ;

		  *numv3 += nbvert ;

/*
                  int n;
                  n = plotdigits( value, xk, yk, xm, ym,
                                  vx3+(*numv3), vy3+(*numv3) );
                  *numv3 = *numv3 + n;
*/

               }
            }

	    if(vv) vv[numv] = vv[numv+1] = gg ;

            switch (ii) {
               case 1:
                  gba = gb-ga;
                  gca = gc-ga;
                  if (ABS(gba) < 0.0000001)
                    vx[numv] = xx;
                  else
                    vx[numv] = xx+xd*(gg-ga)/gba;
                  vy[numv] = yy;
                  numv++;
                  if (ABS(gca) < 0.0000001)
                     vy[numv] = yy;
                  else
                    vy[numv] = yy+yd*(gg-ga)/gca;
                  vx[numv] = xx;
                  numv++;
                  break;

               case 2:
                  gba = gb-ga;
                  gdb = gd-gb;
                  if (ABS(gba) < 0.0000001)
                    vx[numv] = xx;
                  else
                    vx[numv] = xx+xd*(gg-ga)/gba;
                  vy[numv] = yy;
                  numv++;
                  if (ABS(gdb) < 0.0000001)
                    vy[numv] = yy;
                  else
                    vy[numv] = yy+yd*(gg-gb)/gdb;
                  vx[numv] = xx+xd;
                  numv++;
                  break;

               case 3:
                  gca = gc-ga;
                  gdb = gd-gb;
                  if (ABS(gca) < 0.0000001)
                    vy[numv] = yy;
                  else
                    vy[numv] = yy+yd*(gg-ga)/gca;
                  vx[numv] = xx;
                  numv++;
                  if (ABS(gdb) < 0.0000001)
                    vy[numv] = yy;
                  else
                    vy[numv] = yy+yd*(gg-gb)/gdb;
                  vx[numv] = xx+xd;
                  numv++;
                  break;

              case 4:
                  gca = gc-ga;
                  gdc = gd-gc;
                  if (ABS(gca) < 0.0000001)
                    vy[numv] = yy;
                  else
                    vy[numv] = yy+yd*(gg-ga)/gca;
                  vx[numv] = xx;
                  numv++;
                  if (ABS(gdc) < 0.0000001)
                    vx[numv] = xx;
                  else
                    vx[numv] = xx+xd*(gg-gc)/gdc;
                  vy[numv] = yy+yd;
                  numv++;
                  break;

               case 5:
                  gba = gb-ga;
                  gdc = gd-gc;
                  if (ABS(gba) < 0.0000001)
                    vx[numv] = xx;
                  else
                    vx[numv] = xx+xd*(gg-ga)/gba;
                  vy[numv] = yy;
                  numv++;
                  if (ABS(gdc) < 0.0000001)
                    vx[numv] = xx;
                  else
                    vx[numv] = xx+xd*(gg-gc)/gdc;
                  vy[numv] = yy+yd;
                  numv++;
                  break;

               case 6:
                  gba = gb-ga;
                  gdc = gd-gc;
                  gca = gc-ga;
                  gdb = gd-gb;
                  if (ABS(gba) < 0.0000001)
                    vx[numv] = xx;
                  else
                    vx[numv] = xx+xd*(gg-ga)/gba;
                  vy[numv] = yy;
                  numv++;
                  /* here's a brain teaser*/
                  if ( (gg>gv) ^ (ga<gb) ) {  /*XOR*/
                     if (ABS(gca) < 0.0000001)
                        vy[numv] = yy;
                     else
                        vy[numv] = yy+yd*(gg-ga)/gca;
                     vx[numv] = xx;
                     numv++;
                     if (ABS(gdb) < 0.0000001)
                        vy[numv] = yy;
                     else
                        vy[numv] = yy+yd*(gg-gb)/gdb;
                     vx[numv] = xx+xd;
                     numv++;
                  }
                  else {
                     if (ABS(gdb) < 0.0000001)
                       vy[numv] = yy;
                     else
                       vy[numv] = yy+yd*(gg-gb)/gdb;
                     vx[numv] = xx+xd;
                     numv++;
                     if (ABS(gca) < 0.0000001)
                       vy[numv] = yy;
                     else
                       vy[numv] = yy+yd*(gg-ga)/gca;
                     vx[numv] = xx;
                     numv++;
                  }
                  if (ABS(gdc) < 0.0000001)
                     vx[numv] = xx;
                  else
                     vx[numv] = xx+xd*(gg-gc)/gdc;
                  vy[numv] = yy+yd;
                  numv++;
                  break;

               case 7:
                  gdb = gd-gb;
                  gdc = gd-gc;
                  if (ABS(gdb) < 0.0000001)
                     vy[numv] = yy;
                  else
                     vy[numv] = yy+yd*(gg-gb)/gdb;
                  vx[numv] = xx+xd;
                  numv++;
                  if (ABS(gdc) < 0.0000001)
                     vx[numv] = xx;
                  else
                     vx[numv] = xx+xd*(gg-gc)/gdc;
                  vy[numv] = yy+yd;
                  numv++;
                  break;

            } /* switch */

            /* If contour level is negative, make dashed line */
            if (gg < 0.0 && idash==1) {
               float vxa, vya, vxb, vyb;
               vxa = vx[numv-2];
               vya = vy[numv-2];
               vxb = vx[numv-1];
               vyb = vy[numv-1];
               vx[numv-2] = (3.0*vxa+vxb) * 0.25;
               vy[numv-2] = (3.0*vya+vyb) * 0.25;
               vx[numv-1] = (vxa+3.0*vxb) * 0.25;
               vy[numv-1] = (vya+3.0*vyb) * 0.25;
            }

         }  /* for il */    /* NOTE:  gg incremented in for statement */

      }  /* for ic */

   }  /* for ir */

   ipnt[nump] = numv;

   /* copy vertices from vx, vy arrays to either v1 or v2 arrays */
   ip = 0;
   for (ir=0;ir<nrm && ip<2*maxtemp;ir++) {
      for (ic=0;ic<ncm && ip<2*maxtemp;ic++) {
         int start, len;
         start = ipnt[ip];
         len = ipnt[ip+1] - start;
         if (len>0) {
            if (MARK(ir,ic)==2) {
               if (*numv2+len<maxv2) {
                  memcpy( vx2+(*numv2), vx+start, len*sizeof(float) );
                  memcpy( vy2+(*numv2), vy+start, len*sizeof(float) );
                  if(vv) memcpy( vv2+(*numv2), vv+start, len*sizeof(float) );
                  *numv2 += len;
               }
            }
            else {
               if (*numv1+len<maxv1) {
                  memcpy( vx1+(*numv1), vx+start, len*sizeof(float) );
                  memcpy( vy1+(*numv1), vy+start, len*sizeof(float) );
                  if(vv) memcpy( vv1+(*numv1), vv+start, len*sizeof(float) );
                  *numv1 += len;
               }
            }

         }
         ip++;
      }
   }

   /* deallocate mark array */
   Free (mark) ;

   Free(vx); Free(vy); if(vv) Free(vv); Free(ipnt);

   return 1;
}




/* ------------------------------------------------------------------------ */
/*  C o n t o u r G r i d                                                   */
/* ------------------------------------------------------------------------ */

void Print_Contour2D(int Format, float *Array, double *N, 
		     double *X, double *Y, double *Z, double NbrIso){

  float *vr1, *vc1, *vv1, *vr2, *vc2, *vv2, *vr3, *vc3, *vv3 ; 
  float interval, low = 1.e200, high = -1.e200, base ;
  int factx, facty, contourok ;
  int max_cont_verts, numv1, numv2, numv3 ;
  int i, nr, nc ;
  struct PostElement *PE ;

  nr = N[0] + 1 ;
  nc = N[1] + 1 ;

  for(i = 0 ; i < nr*nc ; i++){
    low = MIN2(low, Array[i]) ;
    high = MAX2(high, Array[i]) ;
  }

  base = low ;
  interval = (high-low) / NbrIso ;

  max_cont_verts = 4 * (nr-1) * (nc-1) * fabs((high-low)/interval) + .5;
  
  vr1 = (float *) Malloc(sizeof(float)*max_cont_verts);
  vc1 = (float *) Malloc(sizeof(float)*max_cont_verts);
  vv1 = (float *) Malloc(sizeof(float)*max_cont_verts);

  vr2 = (float *) Malloc(sizeof(float)*max_cont_verts/2);
  vc2 = (float *) Malloc(sizeof(float)*max_cont_verts/2);
  vv2 = (float *) Malloc(sizeof(float)*max_cont_verts/2);

  vr3 = (float *) Malloc(sizeof(float)*max_cont_verts/2);
  vc3 = (float *) Malloc(sizeof(float)*max_cont_verts/2);
  vv3 = (float *) Malloc(sizeof(float)*max_cont_verts/2);

  factx = 0 ;
  facty = 0 ;

  contourok = contour(Array, nr, nc, 
		      interval, low, high, base,
		      factx, facty,
		      vr1, vc1, vv1, max_cont_verts, &numv1,
		      vr2, vc2, vv2, max_cont_verts/2, &numv2,
		      vr3, vc3, vv3, max_cont_verts/2, &numv3);
  
  if(!contourok) return ;

  PE = Create_PostElement(0, LINE, 2, 0) ;

  for (i = 0 ; i < numv1 ; i+=2){
    PE->x[0] = X[0] + (X[1] - X[0]) * vr1[i]/N[0]  + (X[2] - X[0]) * vc1[i]/N[1] ;
    PE->y[0] = Y[0] + (Y[1] - Y[0]) * vr1[i]/N[0]  + (Y[2] - Y[0]) * vc1[i]/N[1] ;
    PE->z[0] = Z[0] + (Z[1] - Z[0]) * vr1[i]/N[0]  + (Z[2] - Z[0]) * vc1[i]/N[1] ;
    PE->x[1] = X[0] + (X[1] - X[0]) * vr1[i+1]/N[0]  + (X[2] - X[0]) * vc1[i+1]/N[1] ;
    PE->y[1] = Y[0] + (Y[1] - Y[0]) * vr1[i+1]/N[0]  + (Y[2] - Y[0]) * vc1[i+1]/N[1] ;
    PE->z[1] = Z[0] + (Z[1] - Z[0]) * vr1[i+1]/N[0]  + (Z[2] - Z[0]) * vc1[i+1]/N[1] ;
    PE->Value[0].Type = SCALAR ;
    PE->Value[0].Val[0] = vv1[i] ;
    PE->Value[1].Type = SCALAR ;
    PE->Value[1].Val[0] = vv1[i+1] ;
    Print_PostElement(Format, 0, 0, 1, 1, 0, NULL, PE);
  }

  for (i = 0 ; i < numv3 ; i+=2){
    PE->x[0] = X[0] + (X[1] - X[0]) * vr3[i]/N[0]  + (X[2] - X[0]) * vc3[i]/N[1] ;
    PE->y[0] = Y[0] + (Y[1] - Y[0]) * vr3[i]/N[0]  + (Y[2] - Y[0]) * vc3[i]/N[1] ;
    PE->z[0] = Z[0] + (Z[1] - Z[0]) * vr3[i]/N[0]  + (Z[2] - Z[0]) * vc3[i]/N[1] ;
    PE->x[1] = X[0] + (X[1] - X[0]) * vr3[i+1]/N[0]  + (X[2] - X[0]) * vc3[i+1]/N[1] ;
    PE->y[1] = Y[0] + (Y[1] - Y[0]) * vr3[i+1]/N[0]  + (Y[2] - Y[0]) * vc3[i+1]/N[1] ;
    PE->z[1] = Z[0] + (Z[1] - Z[0]) * vr3[i+1]/N[0]  + (Z[2] - Z[0]) * vc3[i+1]/N[1] ;
    PE->Value[0].Type = SCALAR ;
    PE->Value[0].Val[0] = vv3[i] ;
    PE->Value[1].Type = SCALAR ;
    PE->Value[1].Val[0] = vv3[i+1] ;
    Print_PostElement(Format, 0, 0, 1, 1, 0, NULL, PE);
  }

  Destroy_PostElement(PE) ;

  Free(vr1) ; Free(vc1) ; Free(vv1) ;
  Free(vr2) ; Free(vc2) ; Free(vv2) ;
  Free(vr3) ; Free(vc3) ; Free(vv3) ;

}







/* ------------------------------------------------------------------------ */
/*  C a l _ I s o                                                           */
/* ------------------------------------------------------------------------ */

/*
  Compute contours on unstructured grids
 */

void Interpolate(double *X, double *Y, double *Z, 
		 struct Value *Val, double V, int I1, int I2, 
		 double *XI, double *YI ,double *ZI){
  
  if(Val[I1].Val[0] == Val[I2].Val[0]){
    *XI = X[I1]; 
    *YI = Y[I1]; 
    *ZI = Z[I1]; 
  }
  else{
    *XI= (V - Val[I1].Val[0])*(X[I2]-X[I1])/(Val[I2].Val[0]-Val[I1].Val[0]) + X[I1];
    *YI= (V - Val[I1].Val[0])*(Y[I2]-Y[I1])/(Val[I2].Val[0]-Val[I1].Val[0]) + Y[I1];
    *ZI= (V - Val[I1].Val[0])*(Z[I2]-Z[I1])/(Val[I2].Val[0]-Val[I1].Val[0]) + Z[I1];
  }
}

void Cal_IsoTetrahedron(double *X, double *Y, double *Z, struct Value *Val, 
			double V, double Vmin, double Vmax,
			double *Xp, double *Yp, double *Zp, int *nb){
  if(V != Vmax){
    *nb = 0;
    if((Val[0].Val[0] > V && Val[1].Val[0] <= V) || 
       (Val[1].Val[0] > V && Val[0].Val[0] <= V)){
      Interpolate(X,Y,Z,Val,V,0,1,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
    }
    if((Val[0].Val[0] > V && Val[2].Val[0] <= V) ||
       (Val[2].Val[0] > V && Val[0].Val[0] <= V)){
      Interpolate(X,Y,Z,Val,V,0,2,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
    }
    if((Val[0].Val[0] > V && Val[3].Val[0] <= V) ||
       (Val[3].Val[0] > V && Val[0].Val[0] <= V)){
      Interpolate(X,Y,Z,Val,V,0,3,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
    }
    if((Val[1].Val[0] > V && Val[2].Val[0] <= V) ||
       (Val[2].Val[0] > V && Val[1].Val[0] <= V)){
      Interpolate(X,Y,Z,Val,V,1,2,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
    }
    if((Val[1].Val[0] > V && Val[3].Val[0] <= V) ||
       (Val[3].Val[0] > V && Val[1].Val[0] <= V)){
      Interpolate(X,Y,Z,Val,V,1,3,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
    }
    if((Val[2].Val[0] > V && Val[3].Val[0] <= V) ||
       (Val[3].Val[0] > V && Val[2].Val[0] <= V)){
      Interpolate(X,Y,Z,Val,V,2,3,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
    }
  }
  else{
    *nb=0;
    if((Val[0].Val[0] < V && Val[1].Val[0] <= V) ||
       (Val[1].Val[0] < V && Val[0].Val[0] <= V)){
      Interpolate(X,Y,Z,Val,V,0,1,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
    }
    if((Val[0].Val[0] < V && Val[2].Val[0] <= V) ||
       (Val[2].Val[0] < V && Val[0].Val[0] <= V)){
      Interpolate(X,Y,Z,Val,V,0,2,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
    }
    if((Val[0].Val[0] < V && Val[3].Val[0] <= V) ||
       (Val[3].Val[0] < V && Val[0].Val[0] <= V)){
      Interpolate(X,Y,Z,Val,V,0,3,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
    }
    if((Val[1].Val[0] < V && Val[2].Val[0] <= V) ||
       (Val[2].Val[0] < V && Val[1].Val[0] <= V)){
      Interpolate(X,Y,Z,Val,V,1,2,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
    }
    if((Val[1].Val[0] < V && Val[3].Val[0] <= V) ||
       (Val[3].Val[0] < V && Val[1].Val[0] <= V)){
      Interpolate(X,Y,Z,Val,V,1,3,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
    }
    if((Val[2].Val[0] < V && Val[3].Val[0] <= V) ||
       (Val[3].Val[0] < V && Val[2].Val[0] <= V)){
      Interpolate(X,Y,Z,Val,V,2,3,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
    }
  }
}


void Cal_IsoTriangle(double *X, double *Y, double *Z, struct Value *Val, 
		     double V, double Vmin, double Vmax,
		     double *Xp, double *Yp, double *Zp, int *nb){
  
  if(V != Vmax){
    *nb = 0;
    if((Val[0].Val[0] > V && Val[1].Val[0] <= V) || 
       (Val[1].Val[0] > V && Val[0].Val[0] <= V)){
      Interpolate(X,Y,Z,Val,V,0,1,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
    }
    if((Val[0].Val[0] > V && Val[2].Val[0] <= V) ||
       (Val[2].Val[0] > V && Val[0].Val[0] <= V)){
      Interpolate(X,Y,Z,Val,V,0,2,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
    }
    if((Val[1].Val[0] > V && Val[2].Val[0] <= V) ||
       (Val[2].Val[0] > V && Val[1].Val[0] <= V)){
      Interpolate(X,Y,Z,Val,V,1,2,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
    }
  }
  else{
    *nb = 0;
    if((Val[0].Val[0] < V && Val[1].Val[0] >= V) ||
       (Val[1].Val[0] < V && Val[0].Val[0] >= V)){
      Interpolate(X,Y,Z,Val,V,0,1,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
    }
    if((Val[0].Val[0] < V && Val[2].Val[0] >= V) || 
       (Val[2].Val[0] < V && Val[0].Val[0] >= V)){
      Interpolate(X,Y,Z,Val,V,0,2,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
    }       
    if((Val[1].Val[0] < V && Val[2].Val[0] >= V) || 
       (Val[2].Val[0] < V && Val[1].Val[0] >= V)){
      Interpolate(X,Y,Z,Val,V,1,2,&Xp[*nb],&Yp[*nb],&Zp[*nb]); (*nb)++;
    }
  }

}


void Cal_Iso(struct PostElement *PE, List_T *list, 
	     double val, double vmin, double vmax){

  int    i, nb;
  struct PostElement *PE2 ;

  switch(PE->Type){
  case TRIANGLE :
    PE2 =  Create_PostElement(0, LINE, 2, 1) ;
    Cal_IsoTriangle(PE->x, PE->y, PE->z, PE->Value, 
		    val, vmin, vmax, PE2->x, PE2->y, PE2->z, &nb) ;
    if(nb > 1){
      for (i = 0 ; i < nb ; i++){
	PE2->Value[i].Type = SCALAR ;
	PE2->Value[i].Val[0] = val ;
      }
      List_Add(list, &PE2);
    }
    else
      Destroy_PostElement(PE2);
    break ;
  case TETRAHEDRON :
    PE2 =  Create_PostElement(0, QUADRANGLE, 4, 1) ;
    Cal_IsoTetrahedron(PE->x, PE->y, PE->z, PE->Value, 
		       val, vmin, vmax, PE2->x, PE2->y, PE2->z, &nb) ;
    if(nb > 2){
      for (i = 0 ; i < nb ; i++){
	PE2->Value[i].Type = SCALAR ;
	PE2->Value[i].Val[0] = val ;
      }
      if(nb == 3){
	PE->Type = TRIANGLE ;
	PE->NbrNodes = nb ;
      }
      else{
	PE->Type = QUADRANGLE ;
	PE->NbrNodes = nb ;
      }
      List_Add(list, &PE2);
    }
    else
      Destroy_PostElement(PE2);
    break ;
  default :
    Msg(ERROR, "Cal_Iso not done for this type of element");
    break ;
  }

}
