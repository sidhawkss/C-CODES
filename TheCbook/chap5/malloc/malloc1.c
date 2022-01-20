#include <stdio.h>
#include <stdlib.h>

int main(void){
	char *ip;
	ip = (char *)malloc(2);
	
	ip[0] = 'A';
	ip[1] = 'B';
	ip[2] = 'C';
	printf("%c\n", ip[0]);
	printf("%c\n", ip[1]);
	printf("%c\n", ip[2]);

	return 0;
}
