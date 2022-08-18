#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// bug count: 4

void calculate_results(int, int, char);

int main(int argc, char ** argv){
  printf("Basic calculator\n");

  if(argc != 4){
    printf("Usage: ./%s x [+-*/] y\n",argv[0]);
    printf("Note that to use mulitplication in the terminal,"
           " you must use \"\\*\" instead of just *\n");
    exit(-1);
  }

  int n1, n2;
  char operator;

  if((n1 = atoi(argv[1])) == 0){
    printf("%s is not a number\n",argv[1]);
    exit(-1);
  }
  if((n2 = atoi(argv[3])) == 0){
    printf("%s is not a number\n", argv[3]);
  }
  operator = argv[2][0];
  calculate_results(n1,n2,operator);
}

void calculate_results(int n1, int n2, char op){
  int result = 0;
  switch(op){
    case '+':
      result = n1 + n2;
    case '-':
      result = n1 - n2;      
    case '/':
      result = n1 / n2;
    case '*':
      result = n1 * n2;
    default:
      printf("Unknown operator: %c\n",op);
      exit(-1);
  }
  printf("%d %c %d = %d\n",n1, op, n2, result);
}