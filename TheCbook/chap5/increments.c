#include <stdio.h>


int main(void){
	int array[3];
	array[0] = 'a';
	array[1] = 'b';
	array[2] = 'c';
	array[3] = 0x00;
	int *pointer;

	pointer = &array;

	printf("%c\n", *(++pointer));
	printf("%c\n", *pointer);
	

	return 0;
}
