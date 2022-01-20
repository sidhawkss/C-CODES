#include <stdio.h>

int main(void){
	int i;
	int *ip;
	void *vp;
	i = 5;

	ip = &i;
	vp = ip;
	ip = vp;

	printf("v: %d\n",i);
	printf("v: %d\n",*ip);
	printf("v: %d\n",*(int *)vp);

	if(ip != &i){
		printf("Compiler error\n");
	}

	return 0;
}
