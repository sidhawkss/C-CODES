#include <stdio.h>

void findLenght(char *string);

int main(void){	
	char *string = "sidhawks";
	findLenght(string);

	return 0;
}


void findLenght(char *string){
	char *pointer = string;
	int counter=0;
	while(*pointer !=0){
		printf("%c ", *(string+counter));
		pointer++;
		counter++;
	}
	printf("\nString size is %d\n", counter);
}
