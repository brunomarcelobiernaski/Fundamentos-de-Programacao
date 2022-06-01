//Escreva um programa e uma função que receba como parâmetro um valor N e retorne o ponteiro para uma matriz N×N alocada dinamicamente. Essa matriz deve conter o valor 1 na diagonal principal e 0 nas demais posições.

//A declaração da função deve ser que aloca memória para a matriz:

#include <stdlib.h>
#include <stdio.h>

float **alocaMatriz(int n){
    float **m;
    m = (float **)malloc(n * sizeof(float*));

    for(int i = 0; i < n; i++){
        m[i] = (float *)malloc(n * sizeof(float));
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                m[i][j] = 1;
            }
            else{
                m[i][j] = 0;
            }
        }
    }
    return m;
}

void print(float **m, int n){
    printf("Matriz:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%.0f", m[i][j]);
            if(j < n-1){
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    float **m = alocaMatriz(n);
    print(m, n);

    return 0;
}

