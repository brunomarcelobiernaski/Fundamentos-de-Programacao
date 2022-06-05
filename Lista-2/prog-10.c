//Desenvolva um programa que leia uma string do teclado e através de uma mensagem indique se esta string representa uma sequência octal ou não. Um sequência octal é formada somente por caracteres 0, 1, 2, 3, 4, 5, 6 ou 7.


#include <stdio.h>
#include <string.h>

int main()
{
    char string[200];
    scanf("%[^\n]s",  string);

    int tam = strlen(string);
    int octal = 0;

    for(int i = 0; i < tam; i++)
    {
        if(string[i] >= 48 && string[i] <= 55)
        {
            octal++;
        }
    }

    if (octal == tam)
    {
        printf("%s eh uma sequencia octal!", string);
    }
    else
    {
        printf("%s nao eh uma sequencia octal!", string);
    }

    return 0;
}

