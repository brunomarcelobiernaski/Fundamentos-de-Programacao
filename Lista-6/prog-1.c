//Escreva um programa que mostre o tamanho (em bytes) que cada um dos tipos de dado a seguir ocupa na memória: char, int, float, double.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("char: %ld\nint: %ld\nfloat: %ld\ndouble: %ld\n", sizeof(char), sizeof(int), sizeof(float), sizeof(double));

    return 0;
}
