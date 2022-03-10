#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>

// Global to exist in every function
#define TRY if (setjmp(savebuf) == 0)
#define CATCHALL else
jmp_buf savebuf;


double compute_avg(double *values, size_t length){
	double sum = 0;
	if(length <= 0){
		longjmp(savebuf, 1);
	}

	for(int i=0; i < length; i++){
		sum += values[i];
	}

	return sum/(double)length;
}

	
int main(int argc, char ** argv){
	int arrLength = argc-1;
	double *darr = malloc(sizeof(double) * arrLength);
	for(int i=1; i <  argc; i++){
		darr[i-1] = atof(argv[i]);
	}
		
	// Initiali return 0 act like TRY
	TRY {
		double avg = compute_avg(darr, arrLength);
		printf("Average = %lf\n", avg);
	} CATCHALL {
		printf("An exception occurred.\n");
	}
}
