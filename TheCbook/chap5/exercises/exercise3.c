#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int findstring(char const*, char const*);


int main(void){
	findstring("I always use spitfire wheels", "spitfire");
	return 0;
}


int findstring(char const* string, char  const* substring){
	char *res = strstr(string, substring);	
	if(res){
		printf("Found\n");
		return *res;
	}else{
		printf("Not found\n");
		return 0;
	}

}
