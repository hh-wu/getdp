# When cut on a plane, this little program allows to calculate the mean in one
# direction of the cut. If a cut of (4,3), moyx.awk gives 5 values with the 
# mean of the four associated values.


BEGIN { y = 0; sum = 0;}

{if ($1==15){
if(y!=$4) {
  printf("%12.5e %12.5e \n",y,sum/cont)
  y = $4
  sum = $9
  cont=1
  }
  else {
    sum+=$9
    cont++
  }
}
}
END {printf("%12.5e %12.5e \n",y,sum/cont)}
