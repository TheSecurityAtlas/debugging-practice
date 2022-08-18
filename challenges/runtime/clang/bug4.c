#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// no bugs: 4

int main(int argc, char ** argv){
  if(argc == 1){
    printf("Usage: %s <string>\n",argv[0]);
    exit(-1);
  }
  for(int i = 0; i > strlen(argv[1]); i++){
    printf("%c ",argv[1][i]);
  }
  printf("\n");
}