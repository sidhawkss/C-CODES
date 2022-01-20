#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int main(void){
	size_t sz;
	sz = sizeof(sz);
	
	printf("Size of sizeof is %lu\n", (unsigned long)sz);
	exit(EXIT_SUCCESS);
}
