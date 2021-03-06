//Escreva uma função

//char *findAlphabeticFile(FILE *f)

//que recebe o ponteiro para um arquivo em f, e retorna o ponteiro para um vetor de caracteres, alocado dinamicamente, contendo todos os caracteres alfabéticos (de a...z e A...Z) encontrados no arquivo apontado por f, na ordem de ocorrência. No caso de não existir nenhum caractere alfabético no arquivo, a função deve retornar um ponteiro nulo (NULL). 

#include <stdio.h>
#include <stdlib.h>

char *findAlphabeticFile(FILE *f){
  char c;
  char *frase = (char *)malloc(1000 * sizeof(char));
  int i = 0;
  while(!feof(f)){
    c = fgetc(f);
    if((c >= 65 && c <= 90) || (c >= 97 && c <= 122)){
     frase[i++] = c;
    }
  }
  frase[i] = '\0';
  if(i == 0){
    return NULL;
  }
  return frase;
}

int main(){
  FILE *f = fopen("arquivo.txt","w+");
  char frase[] = "12345&!00";
  fprintf(f,"%s",frase);
  rewind(f);
  char *s = findAlphabeticFile(f);
  if(s == NULL)
    printf("NULL");
  fclose(f);
  free(s);
  return 0;
}
