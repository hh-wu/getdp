# the file should contain nbtimestep lines, and n results per line
# we compute (nbtimestep-1) time derivatives

BEGIN { 
    dt=1; 
    n=0; time=0;
}

{ 
    if(!time) n = $NF;
    for(j=0; j<n; j++) val[j,time] = $(j+1); 
    time++;
}

END { 
    for(i=1 ; i<time ; i++){
	printf("derivee = ");
	for(j=0 ; j<n ; j++){
	    printf("%g ", (val[j,i]-val[j,i-1])/dt);
	}
	printf("\n");
    }
}
