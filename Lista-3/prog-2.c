//Crie uma estrutura para representar as coordenadas de um ponto no plano cartesiano (posições X e Y). Em seguida, declare e leia do teclado um ponto e exiba a posição dele no plano cartesiano. i

#include <stdio.h>

typedef struct{
    int x, y;
} eixo;

int main()
{
    eixo coordenada;
    scanf("%d %d", &coordenada.x, &coordenada.y);
    
    if(coordenada.x > 0 && coordenada.y > 0)
    {
        printf("Primeiro Quadrante");
    }
    else if(coordenada.x < 0 && coordenada.y > 0)
    {
        printf("Segundo Quadrante");
    }
    else if(coordenada.x < 0 && coordenada.y < 0)
    {
        printf("Terceiro Quadrante");
    }
    else if(coordenada.x > 0 && coordenada.y < 0)
    {
        printf("Quarto Quadrante");
    }
    else if(coordenada.x != 0 && coordenada.y == 0)
    {
        printf("Eixo X");
    }
    else if(coordenada.x == 0 && coordenada.y != 0)
    {
        printf("Eixo Y");
    }
    else
    {
        printf("Origem");
    }
    return 0;
}

