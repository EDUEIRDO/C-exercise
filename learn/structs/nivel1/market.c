#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[50];
    float value;
    int quantity;
}Market;

void showProduts(Market market)
{
    printf("O nome do produto: %s\n", market.name);
    printf("O valor: %.2f\n", market.value);
    printf("A quantidade: %d\n", market.quantity);
}

void getProduts(Market *market)
{
    printf("Digite o nome do produto: ");
    fgets(market->name, sizeof(market->name), stdin);
    market->name[strcspn(market->name, "\n")] = 0;
    printf("Digite o valor do produto: ");
    scanf("%f", &market->value);
    getchar();
    printf("Digite a quantidade: ");
    scanf("%d", &market->quantity);
    getchar();
}

int main()
{
    Market market;

    getProduts(&market);

    showProduts(market);
    return 0;
}