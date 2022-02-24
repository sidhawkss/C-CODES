
#include <stdio.h>
#define TEST(x) if(x !=0) printf("test failed, line%d file %s\n", __LINE__, __FILE__);\
	else printf("oie");

int main(void){
	TEST(1);
	return 0;
}
