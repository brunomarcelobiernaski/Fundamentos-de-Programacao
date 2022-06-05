//Desenvolva um programa para ler uma opção e a seguir mostrar no dispositivo de saída a sequência completa dos respectivos caracteres. Deve-se verificar e somente aceitar um valor válido para a opção. Os valores válidos são 1, 2 ou 3.


#include <stdio.h>

int main()
{
    int b, i = 0;

    while(i == 0){
    scanf("%d", &b);
    if(b == 1)
    {
        for (int i = 48; i <= 57; i++)
        {
            printf("%c", i);
        }
        i = 2;
    }
    else
    {
        if(b == 2)
        {
            for (int i = 65; i <= 90; i++)
            {
                printf("%c", i);
            }
            i = 2;

        }
        else
        {
            if(b == 3)
            {
                for (int i = 97; i <= 122; i++)
                {
                    printf("%c", i);
                }
                i = 2;

            }
        }
    }
    }
    return 0;
}

