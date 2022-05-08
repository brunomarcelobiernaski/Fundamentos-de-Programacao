/*Leia do teclado sete valores inteiros e os armazene em um vetor “A”. Em seguida, o programa deverá construir um vetor “B” de mesmo tamanho, obedecendo a seguinte regra de formação:

a) Bi deverá receber -1 quando Ai for menor que 50;

b) Bi deverá receber 0 quando Ai for igual a 50; e

c) Bi deverá receber 1 quando Ai for maior que 50.

Ao final do processo mostre os vetores “A” e “B” na tela.*/

#include <stdio.h>
#define n 7

int main ()
{
    int vetA[n], i, vetB[n];

    for (i = 0; i < n; i++)
    {
        scanf ("%d", &vetA[i]);
    }

    for (i = 0; i < n; i++)
    {
        if(vetA[i] < 50)
        {
            vetB[i] = -1;
        }
        else
        {
            if(vetA[i] > 50)
            {
                vetB[i] = 1;
            }
            else
            {
                vetB[i] = 0;
            }
        }
    }
    
    for(i = 0; i < n; i++)
    {
        printf("A[%d] = %d  B[%d] = %2d\n",i, vetA[i], i, vetB[i]);
    }

  return 0;
}
