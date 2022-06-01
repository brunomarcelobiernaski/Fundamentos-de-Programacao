/*Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve conter o código da disciplina, nome do aluno e as notas de três provas. Faça um programa que mostre o tamanho (em bytes) dessa estrutura. Usar a estrutura do exemplo:

struct aluno{
    char codigo[5];
    char nome[30];
    float notas[3];
};*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char codigo[5];
    char nome[30];
    float notas[3];
}aluno;

int main()
{
    printf("Quantidade de bytes de aluno: %ld\n", sizeof(aluno));

    return 0;
}
