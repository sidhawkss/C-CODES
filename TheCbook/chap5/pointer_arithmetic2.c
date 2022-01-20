#include <stdio.h>
#define ARSZ 10

int main(void){
	float fa[ARSZ], *fp1, *fp2;
	fp1 = fp2 = fa; /* Address of first element */
	while(fp2 != &fa[ARSZ]){
		printf("Difference: %ld\n", (long)(fp2-fp1));
		fp2++;
	}
	return(0);
}
