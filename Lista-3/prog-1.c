//Crie uma estrutura para representar as vendas de uma loja: quantidade vendida (campo do tipo “int”) e valor por unidade vendida (campo do tipo “float”). Em seguida, deve-se ler a quantidade de vendas realizadas e os dados de cada uma das vendas. Como resultado final mostrar cada venda: quantidade, valor unitário e valor da venda; e o total das vendas.

#include <stdio.h>

typedef struct{
    int qtd;
    float valor;
} loja;

int main()
{
    int n;
    scanf("%d", &n);
    loja vendas[n];
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d %f", &vendas[i].qtd, &vendas[i].valor);
    }
    
    float total = 0;
    
    for (int i = 0; i < n; i++)
    {
        printf("%d x R$ %.2f = R$ %.2f\n", vendas[i].qtd, vendas[i].valor, (vendas[i].qtd * vendas[i].valor));
        total = total + (vendas[i].qtd * vendas[i].valor);
        
    }
    printf("\nTotal das Vendas = R$ %.2f", total);
    return 0;
}

