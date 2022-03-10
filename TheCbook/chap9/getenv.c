#include <stdlib.h>
#include <stdio.h>


int main(void){
	char *env = getenv("SHELL");
	printf("SHELL: %s\n",env);
	env = getenv("PWD");
	printf("pwd: %s\n", env);

	return 0;
}
