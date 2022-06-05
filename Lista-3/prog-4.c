/*Declarar uma estrutura denominada “rgAluno”, para controlar as notas obtidas pelos(as) acadêmicos(as) na primeira prova da disciplina de “Fundamentos de Programação”, com os seguintes campos:
     - nome do aluno (como uma cadeia com 35 caracteres)
     - nota (como um valor numérico real)

Solicite do professor a quantidade de acadêmicos(as), variável “n”, realizaram a avaliação e declarar um vetor para armazenar todas os nomes e as notas informadas, por exemplo:
struct rgAluno turma[n];

O programa ainda deverá ler todas as notas e os respectivos nomes dos alunos da turma e ao final informar:
a) a média geral da turma;
b) a quantidades de alunos possuem notas maior ou igual a média geral da turma;
c) a quantidades de alunos possuem notas somente menor do que a média geral da turma.*/

#include <stdio.h>


typedef struct{
    char nome[35];
    float nota;
}rgAluno;

int main()
{
    int n;
    scanf("%d", &n);
    rgAluno turmaTam[n];

    for(int i = 0; i < n; i++)
    {
        getchar();
        scanf("%[^\n]s", turmaTam[i].nome);
        getchar();
        scanf("%f", &turmaTam[i].nota);
        getchar();
    }

    float soma = 0;
    for(int i = 0; i < n; i++)
    {
        soma = soma + turmaTam[i].nota;
    }
    float media = soma/n;
    int acimaM = 0, abaixoM = 0;

    for(int i = 0; i < n; i++)
    {
        if(turmaTam[i].nota >= media)
        {
            acimaM++;
        }
        else
        {
            abaixoM++;
        }
        soma = soma + turmaTam[i].nota;
    }

    printf("Media geral da Turma: %.2f\nAlunos com nota acima da media.: %d\nAlunos com nota abaixo da media: %d",
    media, acimaM, abaixoM);





    return (0);
}

