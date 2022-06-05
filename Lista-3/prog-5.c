//Implemente um programa que recebe duas strings e deve combiná-las, alternando as letras de cada string, começando com a primeira letra da primeira string, seguido pela primeira letra da segunda string; em seguida pela segunda letra da primeira string, seguido pela segunda letra da segunda string, e assim sucessivamente. As letras restantes da cadeia mais longa devem ser adicionadas ao fim da string resultante.


#include <stdio.h>
#include <string.h>

typedef struct{
   char s1[51];
   char s2[51];
   char result[101];
}arq;

int main()
{
    int tam;
    scanf("%d", &tam);

    arq teste[tam];

    for (int i = 0; i < tam; i++)
    {
        getchar();
        scanf("%s", teste[i].s1);
        scanf("%s", teste[i].s2);
    }

    for(int i = 0; i < tam; i++)
    {
        int s1 = strlen(teste[i].s1);
        int s2 = strlen(teste[i].s2);
        int j = 0, l = 0;
        for(int k = 0; k < s1+s2; k++){
            if(l < s1 && l < s2)
            {
                teste[i].result[j] = teste[i].s1[l];
                j++;
                teste[i].result[j] = teste[i].s2[l];
                j++;
                l++;
            }
            else if (l < s1)
            {
                teste[i].result[j] = teste[i].s1[l];
                j++;
                l++;
            }
            else if (l < s2)
            {
                teste[i].result[j] = teste[i].s2[l];
                j++;
                l++;
            }
        }
        teste[i].result[j] = '\0';

    }

    for (int i = 0; i < tam; i++)
    {
        printf("%s\n", teste[i].result);
    }
    return 0;
}

