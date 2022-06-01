//Elabore um programa que leia do usuário o tamanho de um vetor a ser lido. Em seguida, faça a alocação dinâmica desse vetor. Por fim, leia o vetor do usuário e o imprima.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int *v;
    v = (int *)malloc(n*sizeof(int));

    int i = 0;
    printf("Vetor lido:\n");
    for(; i < n; i++){
        scanf("%d", &*(v+i));
        printf("v[%d]: %d\n", i, *(v+i));
    }

    return 0;
}

