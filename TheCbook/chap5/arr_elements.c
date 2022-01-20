#include <stdio.h>

int main(void){
	int x[100];
	int *pi, *cpi = &x[99]; /* cpi points to the last element of x */
	
	x[4] = 13;
	
	pi = x;
	printf("%d",cpi - x+4);
	if((cpi - pi) != 99)
		printf("Error\n");

	pi = cpi;
	pi++;
	if ((pi-cpi) != 1)
		printf("Error\n");
	

	return 0;
}
