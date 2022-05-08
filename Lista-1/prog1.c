/*Leia do teclado seis valores inteiros e em seguida mostre na tela os valores lidos na ordem inversa.*/

#include <stdio.h>
#define n 6

int main()
{
    int vet[n], i;
    
    for(i = 0; i < n; i++)
    {
        scanf("%d", &vet[i]);
    }

    for(i= n; i > 0; i--)
    {
        printf("%d ", vet[i-1]);
    }
    return 0;
}
