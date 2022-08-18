#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// No. Bugs: 3



void print_hex_dump(char * str, int len);



int main(int argc, char ** argv){

  if(argc == 1){
    printf("Usage: %s <filename>\n",argv[0]);
    return -1;
  }
  char * filename = argv[1];
  char * buffer;
  int len;
  FILE * fp = fopen(filename,"rb");
  if(fp == NULL){
    printf("Failed to open file: %s\n",filename);
    exit(-1);
  }

  fseek(fp,0, SEEK_END);
  len = ftell(fp);
  rewind(fp);

  buffer = (char *)malloc(sizeof(char) * len);
  memset(buffer, 0, sizeof(char) * len);
  fread(buffer, sizeof(buffer), len, fp);

}



void print_hex_dump(char * str, int len){
  // malloc failed for some reason
  if(!str){
    printf("Error: str == nullptr\n");
    return;
  }
  // if there is no length
  if(len == 0) return;
  const int rowlen = 10;
  for(int i = 0; i < len; i++){

    if(i % 10 == 0) printf("|");
    if((i + 1) % 10 == 0) printf("%02x|\n",str[i]);
    else printf("%02x ", str[i]);
  }
  printf("\n");
}