#include <stdio.h>
#define SQUARE(x) (x*x)
#define CUBE(x) (x*x*x)
int main(void){
	printf("%d\n",SQUARE(2));
	printf("%d\n",CUBE(3));
	return 0;
}
