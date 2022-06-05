//Leia uma matriz de tamanho 4 × 2 com as notas de 4 alunos em 2 provas. Em seguida, apresente na tela a média aritmética simples de cada aluno e a média geral das 2 notas.

#include <stdio.h>
#define L 4
#define C 2
#define aluno 4

int main()
{
    float notas[L][C];
    int i, j;
    
    for(i = 0; i < L; i++)
    {
        for(j = 0; j < C; j++)
        {
            scanf("%f", &notas[i][j]);
        }
    }
    
    float mediasPorAluno[aluno] = {0.0, 0.0, 0.0, 0.0}, mediaP1 = 0, mediaP2 = 0;
    
    for(i = 0; i < L; i++)
    {
        for(j = 0; j < C; j++)
        {
            mediasPorAluno[i] = mediasPorAluno[i] + notas[i][j];
        }
    }
    
    for(i = 0; i < aluno; i++)
    {
        mediaP1 = notas[i][0] + mediaP1;
        mediaP2 = notas[i][1] + mediaP2;
        
    }
    
    printf("Medias:\n");
    
    for(i = 0; i < aluno; i++)
    {
        printf("Aluno %d = %.2f \n", i + 1, mediasPorAluno[i]/2);
    }
    printf("Media da prova 1: %.2f\nMedia da prova 2: %.2f", mediaP1/aluno, mediaP2/aluno);
    return 0;
}

