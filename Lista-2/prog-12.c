//Escreva um programa que leia duas strings e a seguir informe se as frases fornecidas são iguais. Obs. realizar esta verificação caractere por caractere, leve em consideração também que caracteres minúsculos são diferentes de caracteres maiúsculos.


#include <stdio.h>
#include <string.h>

int main()
{
    char string_1[1000];
    scanf("%[^\n]", string_1);
    getchar();
    char string_2[1000];
    scanf("%[^\n]", string_2);

    int tam_1 = strlen(string_1);
    int tam_2 = strlen(string_2);
    int iguais = 0, diferente = 0;


    for(int i = 0; i < tam_1; i++)
    {
        if(string_1[i] == string_2[i])
        {
            iguais++;
        }
        else
        {
            diferente++;
        }
    }


    if(iguais == tam_1 && iguais == tam_2 && diferente == 0)
    {
       printf("As strings sao iguais!");
    }
    else
    {
        printf("As strings sao diferentes!");
    }

    return 0;
}

