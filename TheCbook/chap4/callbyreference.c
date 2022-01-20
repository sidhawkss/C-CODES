#include <stdio.h>

int convert(int *ptr1, int *ptr2){
	printf("Value is %d\n", *ptr1 + *ptr2 );
}

int main(void){
	int var1 = 1, var2 = 2;
	convert(&var1, &var2);

	return 0;
}
