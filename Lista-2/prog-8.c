//Desenvolva um programa que leia uma string do teclado é determine se a palavra lida representa um palíndromo ou não. Exemplo de palavras palíndromas: ovo, natan, sos, arara, etc.


#include <stdio.h>
#include <string.h>

int main()
{
    char string[200];
    scanf("%[^\n]s", string);

    char string_aux [strlen(string)];
    int j = 0;

    for (int i = strlen(string) - 1; i >= 0; i--)
    {
        string_aux[j] = string[i];
        j++;
    }
    string_aux[j] = '\0';


    int igual=0;
    for(int i = 0; i < strlen(string); i++)
    {
        if (string_aux[i] == string[i])
        {
            igual++;
        }
    }
    if(igual == strlen(string))
    {
        printf("%s eh um palindromo.", string);
    }
    else
    {
        printf("%s %cnao%c eh um palindromo.", string, '"', '"');
    }
    return 0;
}

