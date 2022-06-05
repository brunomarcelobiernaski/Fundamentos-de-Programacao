//Desenvolva um programa que leia uma string do teclado e a seguir mostre os caracteres na ordem inversa.


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


    printf("%s", string_aux);
    return 0;
}

