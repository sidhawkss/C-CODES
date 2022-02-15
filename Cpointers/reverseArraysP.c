#include <stdio.h>

void reverseArray(int *pointer);

int main(void){
	int array[4] = {22,21,20,19};
	int *pointer = array;	
	reverseArray(pointer);

	return 0;
}

void reverseArray(int *pointer){
	int newArr[4];
	printf("[*]Reversing the array...\n\n");
	for(int i=3; i >= 0; i--){
		newArr[4-i] = *(pointer+i);
		printf("%d ", newArr[4-i]);
	}
	printf("\n");
	pointer = newArr;
}
