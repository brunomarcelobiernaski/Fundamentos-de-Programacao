#include <stdio.h>
#include <stdlib.h>
#define TAM 100

typedef struct{
  char nome[TAM];
  int idade;
}dados;



int main(){
  int n;
  scanf("%d", &n);

  dados **pessoadados;
  pessoadados = malloc(n * sizeof(dados*));
  int i = 0;
  for(; i < n; i++){
    pessoadados[i] = malloc(sizeof(dados));
  }

  for(i = 0; i < n; i++){
    getchar();
    scanf("%[^\n]s", pessoadados[i]->nome);
    getchar();
    scanf("%d", &pessoadados[i]->idade);
  }

  printf("Pessoas cadastrados:\n");
  for(i = 0; i < n; i++){
    printf("* %s com %d anos\n",pessoadados[i]->nome, pessoadados[i]->idade); 
  }

  for(i = 0; i < n; i++){
    free(pessoadados[i]);
  }
  free(pessoadados);

  return 0;
}
