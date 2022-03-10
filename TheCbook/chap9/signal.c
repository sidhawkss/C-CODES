#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

FILE *temp_file;
void leave(int sig);

int main(void){
	(void) signal(SIGINT,leave);
	temp_file = fopen("tmp", "w");
	for(;;){
		/* Do things... */
		printf("Ready...\n");
		(void)getchar();
	}
	/* can't get here... */
	exit(EXIT_SUCCESS);
}

/* on recepit of SIGINT, close tmp file
 * but beware - calling library functions from a
 * signal handler is not guaranteed to work in all
 * implelentations...
 * This is not strictly conforming program
 */

void leave(int sig){
	fprintf(temp_file,"\nInterrupted...\n");
	fclose(temp_file);
	exit(sig);
}
