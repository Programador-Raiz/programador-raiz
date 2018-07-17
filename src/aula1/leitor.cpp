
#include <stdio.h>

int main()
{
  const char *p = "\"setor\":\"alimentos\"";

  while (*p != 0x00)
  {
    printf("<%c>\n", *p);
    p++;
  }

  return 0;
}