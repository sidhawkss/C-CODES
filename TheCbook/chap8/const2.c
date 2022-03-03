#include <stdio.h>

int main(void){
	int c = 15;
	char *const cp = &c;
	printf("Value of cp %d\n", *cp);
	c = 10;
	printf("Value of c %d\n", *cp);	

	return 0;
}
