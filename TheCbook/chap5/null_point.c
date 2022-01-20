#include <stdio.h>

int main(void){
	int *ip;
	ip = (int *)6;
	*ip = 0xFF;

	puts(*ip);

	return 0;
}
