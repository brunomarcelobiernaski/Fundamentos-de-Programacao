//Leia do teclado 2 (dois) valores inteiros e os armazene em um vetor. Em seguida, mostre a tabuada de cada um dos elementos do vetor.

#include <stdio.h>
#define tam 10

int main()
{
    int vetA[tam], vetB[tam], i, x, y;
    
    scanf("%d %d", &x, &y);
    
    for (i = 0; i < tam; i++)
    {
        vetA[i] = x * (i + 1);
    }
    
    for (i = 0; i < tam; i++)
    {
        vetB[i] = y * (i + 1);
    }
    
    
    printf("Tabuada do %d\n", x);
    for (i = 0; i < tam; i++)
    {
        printf("%d x %d = %d\n", x, i + 1, vetA[i]);
    }
    
    printf("Tabuada do %d\n", y);
    for (i = 0; i < tam; i++)
    {
        printf("%d x %d = %d\n", y, i + 1, vetB[i]);
    }

    
    return 0;
}

