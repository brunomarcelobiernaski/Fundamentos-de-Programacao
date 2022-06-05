//Dados dois vetores “a” e “b” com 6 elementos inteiros cada. Implementar um programa que verifica se os vetores são iguais na ordem.

//Mostre um dos dois resultados possíveis:
//Vetores "a" e "b" sao iguais!
//Vetores "a" e "b" sao diferentes!


#include <stdio.h>
#define tam 6

int main()
{
    int vet1[6], vet2[6], i;

    for(i = 0; i < tam; i++)
    {
        scanf("%d", &vet1[i]);
    }

    for(i = 0; i < tam; i++)
    {
        scanf("%d", &vet2[i]);
    }

    int igual = 0;

    for(i = 0; i < tam; i++)
    {
        if (vet1[i] == vet2[i])
        {
            igual = igual + 1;
        }
    }

    char letraA ='a', letraB ='b', simbolo = '"';

    if(igual == tam)
    {
        printf("Vetores ");
        printf("%c%c%c", simbolo, letraA, simbolo);
        printf(" e ");
        printf("%c%c%c", simbolo, letraB, simbolo);
        printf(" sao iguais!");
    }
    else
    {
        printf("Vetores %c%c%c e %c%c%c sao diferentes!", simbolo, letraA, simbolo, simbolo, letraB, simbolo);
    }


    return 0;
}

