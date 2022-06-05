//Leia uma matriz de tamanho 3 × 3. Em seguida, conte e exiba na tela quantos elementos negativos ela possui.

#include <stdio.h>
#define tam 3

int main()
{
    int vet[tam][tam], i, j, negativos = 0;
    
    for(i = 0; i < tam; i++)
    {
        for(j = 0; j < tam; j++)
        {
            scanf("%d", &vet[i][j]);
            
            if (vet[i][j] < 0)
            {
                negativos = negativos + 1;
            }
        }
    }
    printf("A matriz tem %d elementos negativos.", negativos);
    
    
    return 0;
}

