
#include <stdio.h>
#include <stdlib.h>

int count_sep(const char *p, char sep)
{
  int count = 0;

  while (*p != 0x00)
  {
    if (*p == sep)
      count++;
    p++;
  }
  return count;
}

char **pointers_sep(const char *p, char sep)
{
  int total_sep = count_sep(p, sep);

  char **pointers = (char **)malloc(total_sep* sizeof(char*));
  
  int count = 0;

  while (*p != 0x00)
  {
    if (*p == sep)
    {
      pointers[count++] = (char *)p;
    }
    p++;
  }
  
  return pointers;
}

int main()
{
  const char *p = "valor1:valor2:valor3";
  int count = 0;

  count = count_sep(p, ':');

  printf("counts <%d>\n", count);

  char **pointers = pointers_sep(p, ':');

  for(int pos = 0; pos < count; pos++)
  {
    printf("%s\n", pointers[pos]);
  }

  printf("1- <%.*s>\n", (int)(pointers[0] - p), p);
  printf("2- <%.*s>\n", (int)(pointers[1] - pointers[0] - 1), pointers[0]+1);
  printf("3- <%.*s>\n", (int)(pointers[2] - pointers[1] - 1), pointers[1]+1);
  
  free(pointers); 

  return 0;
}