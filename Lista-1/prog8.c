//Receba do usuário um vetor com 10 posições. Em seguida, deverão ser impressos na tela o maior e o menor elemento desse vetor.

#include <stdio.h>
#define tam 10

int main()
{
    int vet[tam], i, maior, menor;
    
    for(i = 0; i < tam; i++)
    {
        scanf("%d", &vet[i]);
        
        if(i == 0)
        {
            maior = vet[i];
            menor = vet[i];
        }
        else{
            if(vet[i] > maior)
            {
                maior = vet[i];
            }
            else
            {
                if(menor > vet[i])
                {
                    menor = vet[i];
                }
            }
        }
    }
    printf("Menor valor: %d \nMaior valor: %d", menor, maior);
    
    
    return 0;
}

