//Implemente as duas funções abaixo:

//void gravaNoArquivo(FILE *fp, int v[], int n)

//que recebe como parâmetro um ponteiro para arquivo fp, um vetor de inteiros v, e um inteiro n que representa a quantidade de elementos de v. A função deverá salvar os valores de v no arquivo-texto apontado por fp. 

//int menorValorArquivo(FILE *fp)

//que recebe um ponteiro de arquivo contendo números inteiros (por exemplo, o arquivo preenchido pela função gravaNoArquivo), e retorna o menor dos valores contido neste arquivo. Veja o exemplo abaixo.

#include <stdio.h>

void gravaNoArquivo(FILE *fp, int v[], int n){
  int i = 0;
  while(i < n){
    fprintf(fp, "%d\n", v[i]);
    i++;
  }  
}

int menorValorArquivo(FILE *fp){
  int menor = 9999999, aux;

  rewind(fp);

  while(fscanf(fp, "%d\n", &aux) != EOF){
    if(aux < menor){
      menor = aux;
    }
  }

  return menor;
}

int main(){
  int v[] = {3,2,1,4,5};
  FILE *fp = fopen("arquivo.txt","w+");
  gravaNoArquivo(fp,v,5);
  printf("Menor = %d\n",menorValorArquivo(fp));
  fclose(fp);
  return 0;
}
