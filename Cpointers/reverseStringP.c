#include <stdio.h>
#define SIZE 100

void reverse(char *array, int size);
int main(void){
	char string[] = "pipa";
	int length, sString, sRev;
	length = 0;

	while(string[length] != '\0'){
		length++;
	}
		
	reverse(string, length);
	return 0;
}

void reverse(char *array, int size){
	int sRev=0;
	int sAr = size-1;
	char reverse[SIZE];
	while(sAr>=0){
		reverse[sRev] = array[sAr];
		sAr--;	
		sRev++;
	}
	printf("Reverse %s\n", reverse);
	
}
