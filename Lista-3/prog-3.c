//Usando a estrutura, definida no programa da questão 2, para representar as coordenadas de um ponto no plano cartesiano. Declare e leia do teclado dois pontos e exiba a distância entre eles.


#include <stdio.h>
#include <math.h>

typedef struct{
    int x, y;
} eixo;

int main()
{
    eixo coord[2];

    for(int i = 0; i < 2; i++){
        scanf("%d %d", &coord[i].x, &coord[i].y);
    }

    float distXY = sqrt(pow((coord[1].x - coord[0].x), 2) + pow((coord[1].y - coord[0].y), 2));

    printf("A distancia entre os pontos (%d, %d) e (%d, %d) eh de %.2f",coord[0].x, coord[0].y, coord[1].x,
    coord[1].y, distXY);
    return 0;


}

