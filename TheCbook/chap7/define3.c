#include <stdio.h>
#define REPLACE "something useful"
#define JOIN(a, b) a ## b

int main(void){
	puts(JOIN(REP,LACE));
	return 0;
}
