//Faça uma função

//int *encontraPrimos(FILE *fp, int *q)

//que recebe um ponteiro de arquivo texto em fp, o qual contém uma sequência indeterminada de números inteiros maiores que zero e foi previamente aberto no modo "w+" na parte principal do programa. A função deve retornar o ponteiro para um vetor de inteiros alocado dinamicamente, contendo todos os números do arquivo apontado por fp que forem primos, na ordem de ocorrência no arquivo. A quantidade de elementos do vetor retornado (quantidade de números primos encontradas no arquivo) deve ser armazenada no endereço apontado pelo ponteiro q, recebido como parâmetro pela função. 

#include <stdio.h>
#include <stdlib.h>

int verificarPrimo(int num){
  int i = 2;
  if(num > 1){
    for(; i <= num / 2; i++){
      if(num % i == 0){
        return 0;
      }
    }
  }
  else{
    return 0;
  }
  return 1;
}


int *encontraPrimos(FILE *fp, int *q){
  int i = 0;
  int *vet = (int *)malloc(100 * sizeof(int));
  int valor;

  while(fscanf(fp, "%d ", &valor) != EOF){
    if(verificarPrimo(valor) != 0){
      vet[i++] = valor;
      (*q)++;
    }
  }
  if(i > 0)
    return vet;
  else {
    return NULL;
  }
}

int main(){
  FILE *fp = fopen("teste.txt","w+");
  int i, n = 0;
  fprintf(fp,"4 4 4 4 6 9 12 13 34 7 21");
  rewind(fp);
  int *vet = encontraPrimos(fp,&n);
  for(i=0; i < n; i++)
      printf("%d ",vet[i]);
  fclose(fp);
  free(vet);
  return 0;
}
