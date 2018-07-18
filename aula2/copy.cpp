
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *copy(char *p_in)
{
  int tam_in = strlen(p_in);
  char *p_out = (char *) malloc(tam_in * sizeof(char));
  memcpy(p_out, p_in, tam_in);
  return p_out;
}

int main()
{
  char p1[6] = "valor";

  char *p2 = p1;  
  char *p3 = copy(p1);

  printf("p1=<%s>\n", p1);
  printf("p2=<%s>\n", p2);
  printf("p3=<%s>\n", p3);

  // p1[0] = 'c';

  // printf("p1=<%s>\n", p1);
  // printf("p2=<%s>\n", p2);
  // printf("p3=<%s>\n", p3);

  return 0;
}