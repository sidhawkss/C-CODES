#include <stdio.h>
#define VALUE 10

void funcSwap(int *pointer1,int *pointer2);

int main(void){
	int value1, value2, *pointer1, *pointer2;
	value1 = 10;
	value2 = 20;
	pointer1 = &value1;
	pointer2 = &value2;

	funcSwap(pointer1,pointer2);
	printf("Value1: %d\nValue2: %d\n",value1, value2);
	return 0;
}


void funcSwap(int *pointer1,int *pointer2){
	int tmp;
	tmp = *pointer1;
	*pointer1 = *pointer2;
	*pointer2 = tmp;
}
