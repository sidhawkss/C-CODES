#include <stdio.h>

void reverseString(char *pointer);

int main(void){
	char arr[] = "sidhawks";	
	char *pointer1;
	pointer1 = arr;
	
	reverseString(pointer1);
	//parintf("%s", pointer);

	return 0;
}


void reverseString(char *pointer){
	char *tmp;
	tmp = pointer;
	printf("%s\n",++tmp);
}
