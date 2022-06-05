//Faça uma função

//void geraTrianguloInferior(FILE *fp, int n)

//que recebe em fp o ponteiro para um arquivo previamente aberto no main no modo "w+", e também um inteiro n entre 1 e 20, e armazena no arquivo texto apontado por fp um triângulo retângulo inferior de dimensões n.

#include <stdio.h>

void geraTrianguloInferior(FILE *fp, int n){
  int i, j, k = 0;
  char vet[n*n+1];
  for(i = 1; i <= n; i++){
    for(j = 1; j <= n; j++){
      if(i == j){
        vet[k] = '*';
      }
      else if (i > j){
        vet[k] = '*';
      }
      else{
        vet[k] = ' ';
      }
      k++;
    }
    vet[k] = '\n';
    k++;
  }
  vet[k] = '\0';
  fprintf(fp, "%s", vet);
}

int main(void){
  FILE *fp = fopen("arquivo.txt","w+");
  char ch;
  geraTrianguloInferior(fp, 10);
  rewind(fp);
  while(!feof(fp)){
    ch = fgetc(fp);
    if(ch!=EOF)
        putchar(ch);
  }
  fclose(fp);
  return 0;
}
