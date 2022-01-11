#include <stdio.h>
#define ARLEN 10

int main(void){
	int ar[ARLEN],*ip;
	ip = ar;

	while(ip < &ar[ARLEN]){
		printf("%d - %d - %d\n", ip, &ar[ARLEN], ar);
		*(ip++) = 0;
	}

	return 0;
}
