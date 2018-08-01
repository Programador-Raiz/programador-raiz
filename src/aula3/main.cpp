
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

//"cnpj":"61144150000163","setor":"alimentos","estado":"SP"
char *remove_char(char *p, char remove)
{

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
  printf ("Arquivo aberto com sucesso.\n");

  int tamanho = s.st_size;

  char *strMsg = (char *) malloc((tamanho+1) * sizeof(char));

  if(fread(&strMsg[0], sizeof(char), tamanho, fp) != tamanho)  
    printf("Erro na leitura do arquivo");

  strMsg[tamanho] = 0x00;
  printf("conteudo: %s\n", strMsg);

  strMsg = remove_char(strMsg, '}');

  printf("conteudo: %s\n", strMsg);
  
  free(strMsg); 



  fclose (fp);
  return 0;
}