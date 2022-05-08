/*Desenvolva um programa para ler um caractere alfabético e a seguir mostre no dispositivo de saída os respectivos caracteres antecessor 
(quando não houver mostrar “*”) e sucessor (quando não houver mostrar “*”) do caractere lido.*/

#include <stdio.h>

int main()
{
    char b;

    scanf("%c", &b);

    if(b >= 65 && b <= 90)
    {
        if(b == 65 || b == 90)
        {
            if(b == 65)
            {
            printf("* {%c} %c\n", b, b + 1);
            }
            else
            {
                printf("%c {%c} *\n", b-1, b);
            }
        }
        else
        {
            printf("%c {%c} %c\n", b-1, b ,b+1);
        }
    }

    else if(b >= 97 && b <= 122)
    {
        if(b == 97 || b == 122)
        {
            if(b == 97)
            {
            printf("* {%c} %c\n", b, b + 1);
            }
            else
            {
                printf("%c {%c} *\n", b-1, b);
            }
        }
        else
        {
            printf("%c {%c} %c\n", b-1, b ,b+1);
        }

    }


    return 0;
}
