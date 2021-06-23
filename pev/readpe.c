#include <stdio.h>
#include <stdlib.h>
#include "lib/petest.h"

void error(char *msg){
  if (msg != NULL)
    fprintf(stderr, "Error: %s\n", msg);

  exit(1);
}

void usage(void){
  printf("Use: \n\treadpe <file.exe>\n");
  error(NULL);
}


int main(int argc, char *argv[]){

  if(argc != 2){
    usage();
  }
  PEFILE pe;
    /*type def struct {
   *    char *filepath;
   *    IMAGE_DOS_HEADER *hdr_dos;
   *} PEFILE; */
  pe.filepath = argv[1];


  petest_init(&pe);
  if (petest_ispe(&pe))
    printf("PE identified...\n");
  else
    error("EXITING...\n");
  printf("File:     \t%s\n", pe.filepath);
  printf("MZ Header:\t%x\n", pe.hdr_dos->e_magic);
  printf("COFF header offset: %x\n", pe.hdr_dos->e_lfanew);
  return 0;
}