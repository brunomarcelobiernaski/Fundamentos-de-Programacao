//Leia uma matriz de tamanho 3 × 3. Em seguida, calcule e escreva o valor da soma dos elementos desta matriz.

#include <stdio.h>
#define tam 3

int main()
{
    int vet[tam][tam], i, j, soma = 0;
    
    for(i = 0; i < tam; i++)
    {
        for(j = 0; j < tam; j++)
        {
            scanf("%d", &vet[i][j]);
            soma =  soma + vet[i][j];
        }
    }
    printf("Soma dos elementos: %d", soma);
    
    
    return 0;
}

