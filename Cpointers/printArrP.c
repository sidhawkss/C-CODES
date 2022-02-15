#include <stdio.h>
#define MAX_SIZE 100

int main(void){
	int arr[10];
	int N, i;
	int *ptr = arr;

	printf("Enter elements in array:\n");
	for(i = 0 ; i < 10; i++){
		scanf("%d", arr+i);
	}
	// Point againt to the first element
	ptr = arr;
	printf("Array elements: ");
	for(i = 0; i < 10; i++){
		printf("%d ", *(arr+i));
	}
	return 0;
}
