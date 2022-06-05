//Leia do teclado dois vetores A e B, cada um com 7 elementos inteiros. Desenvolver um programa que realize a interseção (se existir) dos vetores A e B para produzir um vetor C. Interseção de conjuntos = todos os elementos que existem em A e também existem em B. Considerar que não haverá valores repetidos no mesmo vetor.

//Dica para solução:
//Pegar o primeiro elemento do vetor A e buscá-lo em todo o vetor B. Se ele for encontrado, colocá-lo no vetor C.
//Repetir este processo para todos os elementos do vetor A.

//Caso não haja interseção mostrar a seguinte mensagem:
//Nao ha conjunto intersecao.


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


    int j, iguais = 0;
    int vetC[tam];

    for(i = 0; i < tam; i++)
    {
        for(j = 0; j < tam; j++)
        {
            if(vetA[i] == vetB[j])
            {
                vetC[iguais] = vetA[i];
                iguais = iguais + 1;
            }
        }
    }




    if(iguais == 0)
    {
        printf("Nao ha conjunto intersecao.");
    }
    else{
        printf("Intersecao:\n");
        for(i = 0; i < iguais; i++)
        {

            printf("C[%d]= %d\n", i, vetC[i]);
        }
    }


    return 0;
}

