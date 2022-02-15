#include <stdio.h>

// SWAP two arrays 
void swapArrays(int *p1,int *p2);

int main(void){
	int arr1[4] = {10,15,13,11};
	int arr2[4] = {23,21,20,19};
	int *pointer1 = arr1, *pointer2 = arr2;
	swapArrays(pointer1, pointer2);
	
	return 0;
}

void swapArrays(int *p1, int *p2){
	int tmp;
	// Swapping
	for(int i=0; i < 4; i++){
		tmp = *(p1+i);
		*(p1+i) = *(p2+i);
		*(p2+i) = tmp;
		printf("p1[%d]=%d ",i,*(p1+i));
		printf("p2[%d]=%d\n",i,*(p2+i));
	}
}
