//Fazer um programa que receba do usuário a quantidade N de números a ser digitada. Em seguida, o programa deve alocar dinamicamente um vetor de N inteiros, receber N números do usuário e armazenar no vetor, e mostrar o maior valor do vetor, o menor valor do vetor e a média dos valores.


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int *v;
    v = (int *)malloc(n*sizeof(int));

    int i = 0, total = 0, min, max;
    for(; i < n; i++){
        scanf("%d", &*(v+i));
        total += *(v+i);
        if(i == 0){
            min = *(v+i);
            max = *(v+i);
        }
        if(*(v+i) > max){
            max = *(v+i);
        }
        if(*(v+i) < min){
            min = *(v+i);
        }
    }
    double media = (total / (float)n);

    printf("Maior: %d \nMenor: %d \nMedia: %lf", max, min, media);

    return 0;
}

