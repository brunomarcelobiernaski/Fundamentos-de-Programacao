//Faça um programa que leia uma string do teclado e que conte e imprima na tela quantas vogais (maiúsculas e minúsculas) ela possui.

//obs.: letras acentuadas (é, ô, ã,...) não contam como vogais!!!


#include <stdio.h>

int main()
{
    char frase[200];
    scanf("%[^\n]s", frase);

    int vogais = 0;

    for(int i = 0; i < 200; i++)
    {
        if (frase[i] != '\0'){
            if(frase[i] == 'A' || frase[i] == 'a')
            {
                vogais = vogais + 1;
            }
            else if(frase[i] == 'E' || frase[i] == 'e')
            {
                vogais = vogais + 1;
            }
            else if(frase[i] == 'I' || frase[i] == 'i')
            {
                vogais = vogais + 1;
            }
            else if(frase[i] == 'O' || frase[i] == 'o')
            {
                vogais = vogais + 1;
            }
            else if(frase[i] == 'U' || frase[i] == 'u')
            {
                vogais = vogais + 1;
            }
        }
        else
        {
            i = 200;
        }
    }

    printf("Na String existem %d vogais.", vogais);
    return 0;
}

