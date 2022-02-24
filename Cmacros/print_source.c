#include <stdio.h>
#include <stdlib.h>

int main(void){
	FILE *fileP;
	char ch;

	fileP = fopen(__FILE__, "r");
	if (fileP == NULL){
		printf("Error on opening\n");
		exit(0);
	}

	while((ch = fgetc(fileP)) != EOF){
		printf("%c", ch);
	}

	fclose(fileP);

	return 0;
}
