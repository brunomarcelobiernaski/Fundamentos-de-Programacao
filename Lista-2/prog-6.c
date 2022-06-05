//Desenvolva um programa que leia uma string do teclado e através de uma mensagem indique se esta string representa uma sequência binária ou não. Um sequência binária é formada somente por caracteres 0 ou 1.


#include <stdio.h>
#include <string.h>

int main()
{
    char frase[1000];
    scanf("%[^\n]s", frase);

    int tam = strlen(frase);
    int binario = 0;

    for(int i = 0; i < tam; i++)
    {
        if(frase[i] >= 48 && frase[i] <= 49)
        {
            binario++;
        }
        else
        {
            binario--;
        }
    }

    if(binario == tam)
    {
        printf("Eh um sequencia binaria.");
    }
    else
    {
        printf("Nao eh uma sequencia binaria.");
    }

    return 0;
}

