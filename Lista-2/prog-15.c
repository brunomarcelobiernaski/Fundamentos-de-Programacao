//Elabore um programa para obter o nome de uma pessoa e a seguir forneça o sobrenome do nome informado. Por exemplo para o nome: Omero Francisco Bertol, o programa deverá fornecer como resultado: Seja bem-vindo(a) Sr(a). Bertol. Leve em consideração que entre as partes do nome (Omero, Francisco e Bertol) existem um, e somente um, caractere espaço.

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
            count = 0;
            string_divid[j][b] = '\0';
            j++;
            b = 0;
        }
    }
    string_divid[j][b] = '\0';

    printf("Seja bem-vindo(a) Sr(a). %s", string_divid[j]); ////terminar
    return 0;
}


