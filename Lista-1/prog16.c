//Leia do teclado dois vetores A e B cada um com 7 elementos inteiros. Desenvolver um programa que crie um vetor C que é a diferença dos conjuntos formados pelos elementos dos vetores A e B. Diferença de conjuntos = todos os elementos do conjunto A que não existem no conjunto B. Considerar que não haverá valores repetidos no mesmo vetor.

//Dica para solução:
//Pegar o primeiro elemento do vetor A e buscá-lo em todo o vetor B. Se ele "não" for encontrado, colocá-lo no vetor C.
//Repetir este processo para todos os elementos do vetor A.

//Caso não haja diferença mostrar a seguinte mensagem:
//Nao ha conjunto diferenca.


#include <stdio.h>
#define tam 7

int main()
{
    int vetA[tam], vetB[tam], i;

    for(i = 0; i < tam; i++)
    {
        scanf("%d", &vetA[i]);
    }
    for(i = 0; i < tam; i++)
    {
        scanf("%d", &vetB[i]);
    }


    int j;
    int vetC[tam], aux = 0, difernte = 0;

    for(i = 0; i < tam; i++)
    {
        difernte = 0;
        for(j = 0; j < tam; j++)
        {
            if(vetA[i] == vetB[j])
            {
            }
            else
            {
                difernte = difernte + 1;
            }
        }
        if(difernte == tam)
        {
            vetC[aux] = vetA[i];
            aux = aux + 1;

        }
    }


    if(aux == 0)
    {
        printf("Nao ha conjunto diferenca.");
    }
    else{
        printf("Diferenca:\n");
        for(i = 0; i < aux; i++)
        {

            printf("C[%d]= %d\n", i, vetC[i]);
        }
    }


    return 0;
}

