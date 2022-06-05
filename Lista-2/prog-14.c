//Escreva um programa que leia uma string e a seguir implemente um algoritmo que conte e imprima quantidade de caracteres de cada palavra desta string. Leve em consideração que entre as palavras existem um, e somente um, caractere espaço. Lembre-se também que no final da string também tem uma palavra.

#include <stdio.h>
#include <string.h>

int main()
{
    char string[1000];
    scanf("%[^\n]s",  string);

    int tam = strlen(string);
    int palavras = 1;

    for(int i = 0; i < tam; i++)
    {
        if(string[i] == ' ')
        {
            palavras++;
        }
    }

    int vet[palavras];
    char string_divid[palavras][100];
    int count = 0, j = 0;
    int i;
    int b;
    for(i = 0, b = 0; i < tam+1; i++)
    {
        if (string[i] != ' ' && string != '\0')
        {
            count++;
            string_divid[j][b] = string[i];
            b++;
        }else
        {
            vet[j] = count;
            count = 0;
            string_divid[j][b] = '\0';
            j++;
            b = 0;
        }
    }
    vet[j] = count-1;
    string_divid[j][b] = '\0';

    for (int i = 0; i < palavras; i++)
    {
        printf("%da. palavra: %s tem %d caractere(s)\n", i+1, string_divid[i] ,vet[i]);
    }
    return 0;
}

