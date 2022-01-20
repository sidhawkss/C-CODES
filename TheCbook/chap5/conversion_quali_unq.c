#include <stdio.h>

int main(void){
	int i;
	int *value;
	void *unqualified;

	i = 13;
	value = &i;
	unqualified = value;

	printf("Q:%d\n", *value);
	printf("U:%d\n", *(int *)unqualified);

	return 0;
}
