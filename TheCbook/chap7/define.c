#include <stdio.h>

#define NAME "sidhawks"
#define FUNC(a,b) printf("Hello %s%s\n",a,b);
#define FUNC2(a,b) a/*space*/b

int main(void){
	puts(NAME);
	FUNC2(printf, ("%d %d %s\n", 1,24, "urgh"));
	FUNC("sid","hawks");
	return 0;
}
