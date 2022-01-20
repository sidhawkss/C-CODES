#include <stdio.h>

int var1;
int *const pointer = &var1;

int main(void){
	var1 = 12;
	var1 = 11;
	printf("%d\n", *pointer);

	return 0;
}
