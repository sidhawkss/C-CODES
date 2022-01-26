#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
	char *chunk1;
	char *chunk2;
	char *chunk3;
	
	chunk1 = malloc(sizeof(char)*100);
	chunk2 = malloc(sizeof(char)*100);
	strcpy(chunk1,"Hi sidhawks");
	strcpy(chunk2,"Hi people" );

	printf("Analyzing addresses of the HEAP\nchunk1: %p string: %s\nchunk2: %p string: %s\nchunk3(not allocated): %p\n",chunk1,chunk1,chunk2,chunk2,chunk3);
	printf("...Freeing the chunk1[!]...\n");
	free(chunk1);
	chunk3 = malloc(sizeof(char)*100);
	printf("Chunk3 address: %p\nThe program are utilizing the first-fit, taking the nearest compatible area and using to allocation.\n",chunk3);
	return 0;
}
