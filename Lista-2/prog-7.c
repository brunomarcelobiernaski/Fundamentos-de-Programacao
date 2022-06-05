//Escreva um programa para ler uma frase e um caractere. Sempre que o caractere lido aparecer na frase ele deve ser substituído por asterisco. Por exemplo se os valores fornecidos fossem para a frase: o dia esta nublado, e para o caractere: a, o programa deverá fornecer o seguinte resultado: o di* est* nubl*do.


#include <stdio.h>
#include <string.h>

int main()
{
    char string[1000];
    scanf("%[^\n]s", string);
    getchar();
    char letra;
    scanf("%c", &letra);

    int tam = strlen(string);

    char string2[tam];
    int j = 0;

    for(int i = 0; i < tam; i++)
    {
        if (string[i] == letra)
        {
            string2[j] = '*';
            j++;
        }
        else
        {
            string2[j] = string[i];
            j++;
        }
    }
    string2[j] = '\0';

    printf("%s", string2);
    return 0;
}

