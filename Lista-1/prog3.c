/*Leia do teclado dez valores inteiros e os armazene em um vetor. Em seguida, o programa deve calcular e escrever a quantidade de elementos armazenados neste vetor que são pares.*/


#include <stdio.h>

int main()
{
    int vet[10], i, pares = 0;
    
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &vet[i]);
        if((vet[i] % 2) == 0)
        {
            pares = pares +1;
        }
    }
    
    printf("Qtd. de nros pares armazenados no vetor eh = %d", pares);
    
    return 0;
}
