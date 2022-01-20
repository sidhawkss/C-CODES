#include <stdio.h>
#include <stdlib.h>

int main(void){
	int a,b;
	a = 1;
	printf("%d\n", a &= 0xf);
	printf("%d\n", a);
	exit(EXIT_SUCCESS);
}
