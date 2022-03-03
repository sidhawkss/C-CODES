#include <stdio.h>
#include <stdlib.h>

int i_var;
void func(void);

int main(void){
	while(i_var != 1000){
		func();
		i_var++;
	}
	exit(EXIT_SUCCESS);
}

void func(void){
	printf("in func, i_var %d\n", i_var);
}
