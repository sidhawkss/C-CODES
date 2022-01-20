#include <stdio.h>

int function(void);
extern int y;
extern int x;

int main(void){
	function();
	printf("Taking the value of the Y: %d and X: %d\n", y, x);
	return 0;
}
