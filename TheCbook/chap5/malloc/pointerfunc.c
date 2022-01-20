#include <stdio.h>
void func(int,int);

int main(void){
	void (*p)(int,int);
	p = func;
	(*p)(5,5);

	return 0;
}

void func(int x, int y){
	printf("Result is %d\n", x*y);
}
