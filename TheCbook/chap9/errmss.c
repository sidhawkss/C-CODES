#include <stdio.h>
#include <stdlib.h>

int main(void){
	fclose(stdout);
	if(fgetc(stdout) >= 0){
		fprintf(stderr, "What - no error!\n");
		exit(EXIT_FAILURE);
	}
	perror("fgetc");
	exit(EXIT_SUCCESS);
	
}
