
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

char *copy(const char *p, int tam)
{
  char *p_out = (char *)malloc(tam*sizeof(char));
  memcpy(p_out, p, tam);
  return p_out;
}

char **pointers_sep(const char *p, char sep)
{
  int total_sep = count_sep(p, sep);

  char **pointers = (char **)malloc((total_sep + 1)* sizeof(char*));
  
  int count = 0;
  const char *p_ini = p;
  int tam = 0;

  while (*p != 0x00)
  {
    if (*p == sep)
    {
      tam = int(p - p_ini);
      pointers[count] = copy(p_ini, tam);
      p_ini = p + 1;
      count++;
      
    }
    p++;
  }

  tam = int(p - p_ini);
  pointers[count] = copy(p_ini, tam);
  
  return pointers;
}

int main()
{
  const char *p = "valor1:valor2:valor3";
  int count = 0;

  count = count_sep(p, ':');

  printf("counts <%d>\n", count);

  char **pointers = pointers_sep(p, ':');

  for(int pos = 0; pos <= count; pos++)
  {
    printf("%s\n", pointers[pos]);
  }

  free(pointers); 

  return 0;
}