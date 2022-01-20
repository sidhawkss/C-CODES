#include <stdio.h>
#include <stdlib.h>

void func(int);

int main(void){
	void (*fp)(int);
	fp = func;
	(*fp)(1);
	fp(2);
	exit(EXIT_SUCCESS);
}

void func(int arg){
	printf("%d\n", arg);
}
