//Faça um programa que receba a nota e o nome de uma quantidade de alunos fornecida pelo usuário, calcule a média, quantidade de notas acima ou igual da média, e quantidade de notas abaixo da média. (Obs. Utilize struct, alocação dinâmica de memória e função com parâmetro por referência).

#include <stdio.h>
#include <stdlib.h>

typedef struct{
  char nome[30];
  float nota;
}Aluno;

void mediaAlunos(Aluno **pAlunos, int tamanho, float *media, int *qntAcima, int *qntAbaixo){
  int i = 0;
  float total = 0.0;
  for(; i < tamanho; i++){
    total += pAlunos[i]->nota;
  }
  *media = total/(float)tamanho;
  
  for(i = 0; i < tamanho; i++){
    if(pAlunos[i]->nota >= *media){
      (*qntAcima)++;
    }
    else{
      (*qntAbaixo)++;
    }
  } 
}

int main(){
  int n;
  scanf("%d", &n);

  Aluno **pAluno;
  pAluno = malloc(n * sizeof(Aluno*));
  int i = 0;
  for(; i < n; i++){
    pAluno[i] = malloc(sizeof(Aluno));
  }
  
  for(i = 0; i < n; i++){
    getchar();
    scanf("%[^\n]s", pAluno[i]->nome);
    getchar();
    scanf("%f", &pAluno[i]->nota);
  }

  float media = 0; 
  int qntAcima = 0, qntAbaixo = 0;

  mediaAlunos(pAluno, n, &media, &qntAcima, &qntAbaixo);

  printf("Media dos alunos: %.1lf\nQuantidade de alunos acima da media: %d\nQuantidade de alunos abaixo da media: %d\n", media, qntAcima, qntAbaixo);
  
  for(i = 0; i < n; i++){
    free(pAluno[i]);
  }
  free(pAluno);

  return 0;
}
