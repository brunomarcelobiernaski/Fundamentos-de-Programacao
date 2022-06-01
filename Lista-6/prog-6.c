//Escrever um programa que leia dois vetores de mesmo tamanho. O usuário deverá informar o tamanho e os elementos dos vetores. Escrever uma função que receba como parâmetros os vetores lidos e gere um novo vetor que corresponda aos vetores passados como parâmetro de forma intercalada.

#include <stdio.h>
#include <stdlib.h>

int *add_values_1(int n){
  int *aux_1 = (int *)malloc(n * sizeof(int));
  int i = 0;
  for(; i < n; i++){
    scanf("%d", &*(aux_1+i));
  }
  return aux_1;
}

int *add_values_2(int n){
  int *aux_2 = (int *)malloc(n * sizeof(int));
  int i = 0;
  for(; i < n; i++){
    scanf("%d", &*(aux_2+i));
  }
  return aux_2;
}
int *merge(int *vet_1, int *vet_2, int n){
  int *vet_aux = (int *)malloc((2 * n) * sizeof(int));
  int i = 0, j = 0;
  for(; i < n; i++){
    vet_aux[j++] = vet_1[i];
    vet_aux[j++] = vet_2[i];

  }
  return vet_aux;
}

void print(int *v, int n){
  int i = 0;
  printf("Vetor intercalado:\n");
  for(; i < (2 * n); i++){
    printf("%d", *(v+i));
    if(i < (2 * n)-1){
      printf(" ");
    }
  }
  printf("\n");
}

int main(){
  int n;
  scanf("%d", &n);

  int *vet_1 = add_values_1(n);
  int *vet_2 = add_values_2(n);

  int *v = merge(vet_1, vet_2, n);
  
  print(v, n);

  return 0;
}
