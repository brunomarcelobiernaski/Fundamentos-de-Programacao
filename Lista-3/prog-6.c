/*Implementar um programa para mostrar Progressões Aritméticas Crescentes (PA) seguidas das respectivas somas dos números inteiros pertencentes a progressão.

Deve-se obter três números inteiros organizados em uma estrutura de dados do tipo “struct”, sendo eles:
a) inicio (indica o início da PA) – sempre menor que “fim”;
b) fim (indica o final da PA) -  sempre maior que “inicio”;
c) razao (indica a razão da PA).

Quando o programa for encerrado a mensagem: “Fim do programa!!!“, deverá ser exibida na saída.*/

#include <stdio.h>

typedef struct{
    int inicio, fim, passo;
}PA;

int main()
{
    int tam;
    scanf("%d", &tam);
    PA vezes[tam];

    for(int i = 0; i < tam; i++)
    {
        scanf("%d %d %d", &vezes[i].inicio, &vezes[i].fim, &vezes[i].passo);
    }

    int j = 0;
    for (int i = 0; i < tam; i++)
    {
        int soma = 0;
        int whiFim = 1;
        int aux = vezes[j].inicio;
        while(whiFim != 0)
        {
            if(vezes[i].fim >= aux)
            {
                printf("%d, ", aux);
                soma = soma + aux;
                aux = aux + vezes[i].passo;

            }
            else
            {
                printf("soma = %d\n", soma);
                whiFim = 0;
            }
        }
        j++;
    }

    printf("\nFim do programa!!!");
}

