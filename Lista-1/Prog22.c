/*Criar um programa que data uma matriz 3 x 3 deve verificar se ela é ou não uma matriz Identidade (elementos da diagonal principal são todos iguais a 1 e os elementos restantes são iguais a zero).

Respostas possíveis:
A matriz eh identidade.
A matriz nao eh identidade.*/

#include <stdio.h>
#define L 3 
#define C 3

int
main ()
{
    int matriz[L][C], i, j;
    
    for(i = 0; i < L; i++)
    {
        for(j = 0; j < C; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    int teste = 0;
    
    for(i = 0; i < L; i++)
    {
        for( j = 0; j < C; j++)
        {
            if(i == j && matriz[i][j] == 1)
            {
                teste = teste + 1;
            }
            else
            {
                if(i != j && matriz[i][j] == 0)
                {
                    teste = teste + 1;
                }
            }
        }
    }
    
    if(teste == 9)
    {
        printf("A matriz eh identidade.\n");    
    }
    else
    {
        printf("A matriz nao eh identidade.\n");
    }

  return 0;
}

