#include <stdio.h>

int main(void){
	int *value;
	int number = 10;


	value = &number;

	printf("Value of value: %d\n", *value);


	/* apointing to the pointer */ 
	int *new;

	new = value;

	printf("Pointer to value: %d\n", *new);	

	return 0;
}
