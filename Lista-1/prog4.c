//Leia cinco valores do teclado e os armazene em um vetor. Em seguida, o programa deve mostrar o somatório e a média dos valores.

#include <stdio.h>
#define valor 5

int main()
{
    int vetor[valor], i, soma = 0;
    
    for(i = 0; i < valor; i++)
    {
        scanf("%d", &vetor[i]);
        soma = soma + vetor[i];
    }
    
    double media, aux;
    
    aux = valor;
    media =  soma / aux;
    
    printf("A soma eh %d e a media eh %.2lf", soma, media);
    
    return 0;
}

