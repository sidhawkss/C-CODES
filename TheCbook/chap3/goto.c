#include <stdio.h>
#include <stdlib.h>


int main(void){
	int x = 0;
	printf("Starting of working with goto\n");
	if (x == 1){
		goto exiting;
	} else {
		printf("You here");
	}

	exiting:
		exit(EXIT_SUCCESS);
}
