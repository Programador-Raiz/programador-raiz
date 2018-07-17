
#include <stdio.h>
#include <stdlib.h>

int main()
{
  char c1 = 'A';
  char c2 = 'B';

  char *p1 = NULL;
  char *p2 = NULL;

  printf("c1 = <%c> size <%ld> end <%p>\n", c1, sizeof(c1), &c1);
  printf("c2 = <%c> size <%ld>  end <%p>\n", c2, sizeof(c2), &c2);
  printf("p1 = <%p> size <%ld>\n", p1, sizeof(p1));
  printf("p2 = <%p> <size> <%ld>\n", p2, sizeof(p2));

  p1 = &c1;
  p2 = &c2;
  
  printf("p1 VALUE = <%c>\n", *p1);
  printf("p2 VALUE = <%c>\n", *p2);
  printf("p1 = <%p>\n", p1);
  printf("p2 = <%p>\n", p2);

  c1 = 'C';
  printf("p1 VALUE = <%c>\n", *p1);
  printf("p2 VALUE = <%c>\n", *p2);
  printf("p1 = <%p>\n", p1);
  printf("p2 = <%p>\n", p2);
  
  p2=p1;

  printf("p1 VALUE = <%c>\n", *p1);
  printf("p2 VALUE = <%c>\n", *p2);
  printf("p1 = <%p>\n", p1);
  printf("p2 = <%p>\n", p2);
  

  return 0;
}