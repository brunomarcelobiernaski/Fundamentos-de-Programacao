//Escreva um programa que leia uma string e a seguir implemente um algoritmo que conte e imprima a quantidade de palavras existentes nesta string. Leve em consideração que entre as palavras existem um, e somente um, caractere espaço. Lembre-se também que no final da string também tem uma palavra.


#include <stdio.h>
#include <string.h>

int main()
{
    char string[1000];
    scanf("%[^\n]", string);

    int tam = strlen(string), palavras = 1;
    for(int i = 0; i < tam; i++)
    {
        if(string[i] == 32)
        {
            palavras++;
        }
    }

    printf("A string possui %d palavra(s)", palavras);

    return 0;
}

