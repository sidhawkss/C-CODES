#include <stdio.h>

int str_eq(const char *s1, const char *s2){
	while(*s1 == *s2){
		printf("Equal\n");
		if(*s1 == 0)
			return(0);
		s1++; 
		s2++;
	}
	return(1);
}


int main(void) {
	const char *string = "oie";
	const char *string2 = "oie";
	str_eq(string, string2);
	
	return 0;
}
