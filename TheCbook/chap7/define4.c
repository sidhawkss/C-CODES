#include <stdio.h>
#define FUNC(x) ((x) * (x))


int main(void){
	printf("It will be assigned as (x*x): %d\n", FUNC(5));
	printf("It will be assigned as  (2*x)*x: %d\n", 2*FUNC(5));
	return 0;
}
