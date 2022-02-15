#include <stdio.h>
#include <stdlib.h>


void pointerAddition(char *pointer, char *pointer2);

int main(void){
	char array[10] = {5,10,5,10,5,10,5,10,5,10};
	char array2[10]= {5,10,5,10,5,10,5,10,5,10};
	char *pointer1, *pointer2;
	pointer1 = array;
	pointer2 = array2;	
	pointerAddition(pointer1,pointer2);
	
	return 0;
}

void pointerAddition(char *pointer, char *pointer2){
	for(int i=0; i < 10; i++){ 
		printf("Sum of arrays: %d\n",pointer[i]+pointer2[i]);
	}
}
