
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

void remove_char(char *p, const char *charsToRemove)
{
  int toRemove[256] = {0};

  if(NULL == p || NULL == charsToRemove)
    return;

  while (*charsToRemove) {
    toRemove[*charsToRemove++] = 1;
  }

  char *pAux = p;

  while(*p) {
    if (!toRemove[*p])
      *pAux++ = *p;
    p++;
  }

  *pAux = 0x00;
}

int main()
{
  FILE *fp;

  struct stat s;

  if (stat("./company.json", &s)){
    fprintf(stderr, "ERRO ao tentar obter stat\n");
    return 1;
  }
  printf("Tamanho = %ld\n", s.st_size);

  fp = fopen ("./company.json", "r");
  if (fp == NULL) {
     printf ("Houve um erro ao abrir o arquivo.\n");
     return 1;
  }
  printf("Arquivo aberto com sucesso.\n");

  int tamanho = s.st_size;

  char *strMsg = (char *) malloc((tamanho+1) * sizeof(char));

  if(fread(&strMsg[0], sizeof(char), tamanho, fp) != tamanho)
    printf("Erro na leitura do arquivo");

  strMsg[tamanho] = 0x00;
  const char* chartsToRemove = "{} \n";

  // printf("conteudo antes da limpeza: %s\n", strMsg);
  remove_char(strMsg, chartsToRemove);
  printf("conteudo depois da limpeza: %s\n", strMsg);

  free(strMsg);
  fclose (fp);
  return 0;
}
