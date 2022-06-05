//Leia uma matriz de tamanho 3 × 3. Em seguida, mostre os elementos da diagonal principal e calcule o valor da soma destes elementos. Ao final do processo mostre o valor da soma calculada.

#include <stdio.h>
#define tam 3

int main()
{
    int vet[tam][tam], i, j;
    
    for(i = 0; i < tam; i++)
    {
        for(j = 0; j < tam; j++)
        {
            scanf("%d", &vet[i][j]);
        }
    }
    
    int soma = 0;
    printf("Elementos da diagonal principal:\n");
    for(i = 0; i < tam; i++)
    {
        for(j = 0; j < tam; j++)
        {
            if (i == j)
            {
                printf("x[%d][%d]: %d\n", i, j, vet[i][j]);
                soma = soma + vet[i][j];
                
            }
        }
    }
    printf("\nSoma: %d", soma);
    
    
    return 0;
}

