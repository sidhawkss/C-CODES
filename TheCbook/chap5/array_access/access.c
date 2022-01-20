#include <stdio.h>
#include <stdlib.h>

int main(void){
	int x[2];
	x[0] = 1;
	x[1] = 2;
	x[3] = 3;

	printf("address: 0x%x\n", &x[0]);
	printf("value: %d\n", *x);

	printf("Printing: %d\n", *(x+1));
	printf("Equal to: %d\n", *(&x[0]+1));
	printf("Equal to: %d\n", x[1]);
	exit(EXIT_SUCCESS);
}	
