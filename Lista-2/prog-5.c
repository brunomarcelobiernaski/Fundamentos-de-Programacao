//Desenvolva um programa que leia uma string do teclado e através de uma mensagem indique se “todos” os caracteres da cadeia são caracteres alfabéticos maiúsculos.

#include <stdio.h>

int main()
{
    char frase[200];
    scanf("%[^\n]s", frase);
    
    int tudo_Mais = 0, tam=0;
    
    for(int i = 0; i < 200; i++)
    {
        if (frase[i] != '\0')
        {
            if (frase[i] >= 65 && frase[i] <= 90)
            {
                tudo_Mais++;
                tam++;
            }
            else
            {
                tam++;
            }
        }
        else
        {
            i = 200;
        }
    }


    if (tudo_Mais == tam)
    {
        printf("Todos os caracteres da cadeia sao maiusculas.");
    }
    else
    {
        printf("Nem todos os caracteres da cadeia sao maiusculas.");
    }
    return 0;
}

