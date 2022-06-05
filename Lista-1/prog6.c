//mplementar um programa que obtenha a cotação do dólar (U$) em relação ao real (R$) e a seguir armazene em vetor A com 20 elementos as seguintes conversões:
//A[i] = cotação do dolar * i, para todo i variando de 1 até 20.

#include <stdio.h>

int main()
{
    double cotacaoDolar, vet[20];
    
    scanf("%lf", &cotacaoDolar);
    
    int i;
    
    for(i = 0; i < 20; i++)
    {
        vet[i] = cotacaoDolar * (i+1);
    }
    
    for(i = 0; i < 20; i++)
    {
        printf("%.2lf (U$) = %.2lf (R$)\n", i+1.00, vet[i]);
    }

    return 0;
}

