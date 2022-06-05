//Desenvolva um programa que leia uma string do teclado e através de uma mensagem indique se esta string representa uma sequência hexadecimal ou não.

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
        if(string[i] >= 48 && string[i] <= 57)
        {
            octal++;
        }
        else
        {
            if(string[i] >= 97 && string[i] <= 102)
            {
                octal++;
            }
        }
    }

    if (octal == tam)
    {
        printf("%s eh uma sequencia hexadecimal!", string);
    }
    else
    {
        printf("%s nao eh uma sequencia hexadecimal!", string);
    }

    return 0;
}

