#include <stdio.h>

int add(int *A, int *B);


int main(void){
	int num1, num2;
	int ptr1, ptr2;
	
	ptr1 = 10;
	ptr2 = 15;
	num1 = ptr1;
	num2 = ptr2;

	printf("Result: %d\n",add(&ptr2,&ptr2));

	return 0;
}

int add(int *A, int *B){ return (*A+*B); }
