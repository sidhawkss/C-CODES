#include <stdio.h>

void searchElement(int *pointer, int element);

int main(void){
	int arr1[4] = {20,5,19,20};	
	int *pointer;
	pointer = arr1;
	searchElement(pointer, 5);

	return 0;
}

void searchElement(int *pointer, int element){
	for(int i =0; i < 4; i++){
		if(*(pointer+i) == element){
			printf("Element %d found in index %d\n", element, i);
		}
	}
}
