/*Leia um valor inteiro (variável “a”) e a seguir construa um vetor de 10 posições (variável “x”) com o resultado da seguinte expressão:
x[i] = a + i; para todo “i” variando de 0 até 9; Mostre os elementos do vetor “x” como resultado final.*/
#include <stdio.h>
#define tam 10

int main()
{
    int a;
    
    scanf("%d", &a);
    
    int vet[tam], i;
    
    for(i = 0; i < tam; i++)
    {
                vet[i] = a + i;
    }
    
    for(i = 0; i < tam; i++)
    {
        printf("x[%d] = %d\n", i, vet[i]);
    }

    return 0;
}


