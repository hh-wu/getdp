/* This file has been modified by Tuan: indices start at 0 instead of 1
   -- should be removed, eventually */

void lubksb1(double **a, int n, int *indx, double b[])
{
  int i,ii=0 ,ip,j;
  double sum;

  for (i=1 ;i<=n;i++) {
    ip=indx[i-1];
    sum=b[ip];
    b[ip]=b[i-1];
    if (ii) 
      for (j=ii;j<=i-1;j++) sum -= a[i-1][j-1]*b[j-1];
      else if (sum) ii=i; 
      b[i-1]=sum;        
  }
  for (i=n-1;i>=0;i--) {
    sum=b[i];
    for (j=i+1;j<n;j++) sum -= a[i][j]*b[j];
    b[i]=sum/a[i][i];
  }
}
/* (C) Copr. 1986-92 Numerical Recipes Software J!0. */
