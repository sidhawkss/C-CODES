#include <stdio.h>
#include <stdlib.h>

int main(void){
	char arr1[] = "sidhawks";
	char arr2[] = "sidh1wks";
	char *pointer1, *pointer2;
	pointer1 = arr1;
	pointer2 = arr2;	
	printf("Are %s\n",pointer1);
	char *buff=malloc(10);
	scanf("%s", buff);
	printf(buff);
	free(buff);
	return 0;
}
