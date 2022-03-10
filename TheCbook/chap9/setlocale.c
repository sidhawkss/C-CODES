#include <locale.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

int main(void){
	time_t currtime;
	struct tm *timer;
	char buffer[80];

	while ( 1 != 0){
	time( &currtime );
	timer = localtime( &currtime );

	printf("The locale is %s\n", setlocale(LC_ALL, "pt_BR"));
	strftime(buffer, 80, "%c", timer);
	printf("Data: %s\n", buffer);
	}
	
	
	return(0);
}
