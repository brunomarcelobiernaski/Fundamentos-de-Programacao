//Sem utilizar a função “strlen”, faça um programa que leia uma string e imprima na tela quantos caracteres ela possui.

//Obs.: espaços em branco também são considerados caracteres.

#include <stdio.h>

int main()
{
    char frase[200];
    
    scanf("%[^\n]s", frase);
    
    int tam = 0;
    
    for (int i = 0; i < 200; i++)
    {
        if (frase[i] != '\0')
        {
            tam++;
        }
        else
        {
            i = 200;
        }
    }

    printf("Tamanho da String = %d.", tam);
    return 0;
}
