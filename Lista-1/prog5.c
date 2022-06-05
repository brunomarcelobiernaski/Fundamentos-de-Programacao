//Leia do teclado sete valores inteiros e os armazene em um vetor. Desenvolver um programa que defina o percentual de elementos pares e ímpares, respectivamente, armazenados neste vetor.

#include <stdio.h>
#define valor 7

int main()
{
    int vetor[valor], i, par = 0, impar = 0;
    
    for(i = 0; i < valor; i++)
    {
        scanf("%d", &vetor[i]);
        
        if((vetor[i] % 2) == 0)
        {
            par = par + 1; 
        }
        else
        {
            impar = impar + 1;
        }
    }
    
    double auxPar, auxImpar, auxValor;
    
    auxValor = valor;
    
    auxPar = (par / auxValor) * 100;
    auxImpar = (impar / auxValor) * 100;
    
    char porcentagem = '%';
    printf("Percentuais --> Par: %.2lf%c Impar: %.2lf%c", auxPar, porcentagem, auxImpar, porcentagem);
    
    
    
    return 0;
}

