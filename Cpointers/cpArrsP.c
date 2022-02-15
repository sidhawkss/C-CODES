#include <stdio.h>

void copyArr(int *pointer1, int *pointer2);

int main(void){
	// The first pointer will be copied to the second
	int arr1[4] = {10,10,10,10};
	int arr2[4] = {20,20,20,20};
	int *pointer1, *pointer2;
	pointer1 = arr1;
	pointer2 = arr2;
	copyArr(pointer1, pointer2);

	return 0;
}

void copyArr(int *pointer1, int *pointer2){
	int i = 4;
	while(i){
		i--;
		pointer1[i] = pointer2[i];
		printf("%d\n", pointer1[i]);
	}
}
