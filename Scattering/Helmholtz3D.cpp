
class Helmholtz3D{
private:
  // target point
  double u, v; // parameter space
  double r[3]; // xyz space

  // source point
  double up, vp; // parameter space
  double rp[3]; // xyz space

  double R[3], Rnorm; // distance between target and source pt in xyz space
  double theta;

public:
  void init(double _u, double _v, double _r[3], 
	    double _up, double _vp, double _rp[3],
	    double _k);
  double G1();
  double G1_sing();
  Complex G2();
  Complex G2_sing();
}; 

void Helmholtz3D::init(double _u, double _v, double _r[3],
		       double _up, double _vp, double _rp[3],
		       double _k){
  k = _k;
  u = _u;
  v = _v;
  up = _up;
  vp = _vp;
  for(int i=0 ; i<3 ; i++){
    r[i] = _r[i];
    rp[i] = _rp[i];
    R[i] = _r[i] - _rp[i];
  }
  Rnorm = NORM3(R);
  theta = arctan2(vp-v,up-u);
}

double Helmholtz3D::G1(){
  return cos(k*Rnorm)/(4*PI*Rnorm);
}

Complex Helmholtz3D::G2(){
  return Complex(0, sin(k*Rnorm)/(4*pi*Rnorm));
}
        
double Helmholtz3D::G1_sing(Patch *patch){
  double tmp[3], dfdu[3], dfdv[3];

  patch->dfdu(u,v,dfdu);
  patch->dfdv(u,v,dfdv);
  
  double c = cos(theta);
  double s = sin(theta);
  tmp[0] = dfdu[0]*c + dfdv[0]*s;
  tmp[1] = dfdu[1]*c + dfdv[1]*s;
  tmp[2] = dfdu[2]*c + dfdv[2]*s;
  double rhoOverR = 1.0/NORM3(tmp);

  // Original version
  // return cos(self.k*R.norm())/R.norm()
  // Version after multiplying through by rho
  // return self._rhoOverR(u,v,r,up,vp,rp)*cos(self.k*R.norm())
  // Simplified version, assuming R.norm() == 0
  return rhoOverR/(4*PI)
}

Complex Helmholtz3D::G2_sing(){
  return Complex(0, k/(4*PI));
}

