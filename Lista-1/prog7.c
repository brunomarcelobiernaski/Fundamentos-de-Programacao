//Leia um vetor de oito posições. Em seguida, leia também dois valores inteiros “x” e “y” correspondentes a duas posições do vetor (“x” e “y” devem estar compreendidos entre 0 e 7, inclusive). Seu programa deverá exibir na tela a soma dos valores presentes nas posições “x” e “y” do vetor lido.

//obs.: informar as posições do vetor para realizar a soma em ordem crescente, ou seja: primeiro o índice mais baixo para depois o indice superior, até o limite o vetor!

#include <stdio.h>
#define tam 8

int main()
{
    int x, y, vet[tam], i;

    for(i = 0; i < tam; i++)
    {
        scanf("%d", &vet[i]);
    }

    scanf("%d %d", &x, &y);

    int soma = vet[x]+vet[y];

    printf("A soma das duas posicoes vale: %d", soma);

    return 0;
}

