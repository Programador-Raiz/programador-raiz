
#include <stdio.h>

int main()
{
  const char *p = "\"setor\":\"alimentos\"";
  const char *p_ini;
  const char *p_divisor;

  p_ini = p;

  while (*p != 0x00)
  {
    if (*p == ':')
      p_divisor = p;
    p++;
  }
  
  p_ini++;

  printf("chave <%.*s>\n", (int)(p_divisor - p_ini)-1, p_ini);

  p_divisor += 2;

  printf("setor <%.*s>\n", (int)(p - p_divisor)-1, p_divisor);

  return 0;
}