#include <stdio.h>
#define SWAP(x,y) (x ^= y ^= x ^= y)

int main(void){
	int num1=20;
	int num2=10;
	SWAP(num1,num2);
	printf("Swap: %d\n", num1);
	return 0;
}
