#include <stdio.h>

#define MESSAGE(x) printf("Message: %s\n", #x);

int main(void){
	MESSAGE(Text with "quotes");
	return 0;
}
