//Receba do usuário dois vetores “a” e “b”, com 10 inteiros cada. Crie um novo vetor “c” calculando “c = a – b” e mostre na tela os dados dos 3 vetores.

#include <stdio.h>
#define tam 10

int main()
{
    int i, vetA[tam], vetB[tam], vetC[tam];
    
    for(i = 0; i < tam; i++)
    {
        scanf("%d", &vetA[i]);
    }
    for(i = 0; i < tam; i++)
    {
        scanf("%d", &vetB[i]);
    }
    for(i = 0; i < tam; i++)
    {
        vetC[i] = vetA[i] - vetB[i];
    }
    for(i = 0; i < tam; i++)
    {
        printf("%d: %d - %d = %d\n", i, vetA[i], vetB[i], vetC[i]);
    }
    
    return 0;
}
