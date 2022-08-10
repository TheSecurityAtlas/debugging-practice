#include <stdio.h>
#include <string.h>


// Compile with: gcc bug1.c -Wformat-overflow=0
//               or clang bug1.c
int main(){
  char buffer[32];
  char name[16];
  printf("Name: ");
  scanf("%s",name);

  sprintf(buffer,"Hello %s! Nice to meet you. How are you?",name);
  printf("%s\n",buffer);
}