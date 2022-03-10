#include <stdio.h>

// Functions prototype
void Ropen(const char *pathname, const char *mode, FILE *stream);
void open_read(FILE *stream);

int main(void){
	const char *mode = "r";
	const char *name = "char_handling.c";
	FILE *stream = fopen(name,mode);
	
	printf("Opening file...\n");
	Ropen("signal2.c", mode, stream);

	return 0;
}

// Change the pointer to another file.
void Ropen(const char *pathname, const char *mode, FILE *stream){
	FILE *nstream  = freopen(pathname, mode, stream);
	char c = fgetc(nstream);
	while( c != EOF){	
		printf("%c", c);
		c = fgetc(stream);
	}
}

// Open and read file.
void open_read(FILE *stream){
	char c = fgetc(stream);
	while (c != EOF){
		printf("%c",c);
		c = fgetc(stream);
	}
}
