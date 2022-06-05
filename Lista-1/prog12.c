//Construir um programa que, a partir de vetor “a” de inteiros (int a[10]), leia um valor inteiro do teclado (variável “item”) e a seguir implemente a rotina de busca sequencial (do primeiro até encontrar; ou até o final se não encontrar), para pesquisar se um dado “item” está armazenado em “a”. Mostre o resultado da busca: "Valor localizado na posicao X.",  ou "Valor nao foi localizado."  como resultado final.

#include <stdio.h>
#define tam 10

int main()
{
    int vet[tam], i;
    
    for(i = 0; i < tam; i++)
    {
        scanf("%d", &vet[i]);
    }
    
    int valor, aux = 0, achou = 0;
    
    scanf("%d", &valor);
    
    for(i = 0; i < tam; i++)
    {
        if(vet[i] == valor)
        {
            printf("Valor localizado na posicao %d.",i);
            achou = 1;
        }
        else
        {
            aux = 1; 
        }
    }
    
    if(aux == 1 && achou != 1)
    {
        printf("Valor nao foi localizado.");
    }

    return 0;
}

