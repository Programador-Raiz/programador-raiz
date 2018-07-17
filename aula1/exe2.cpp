
#include <stdio.h>

int main()
{
  const char *p = "valor1:valor2:valor3";
  const char sep = ':';
  const char *p_ini;

  p_ini = p;

  while (*p != 0x00)
  {
    if (*p == sep)
    {
      printf("<%.*s>\n", (int)(p - p_ini), p_ini);
      p_ini = p + 1;
    }
    p++;
  }
  printf("<%.*s>\n", (int)(p - p_ini), p_ini);
  
  return 0;
}