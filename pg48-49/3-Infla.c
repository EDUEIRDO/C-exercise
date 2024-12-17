#include <stdio.h>

int main() {
    float preco;
    printf("Digite o preço do produto: ");
    scanf("%f", &preco);

    float inflacao = 0.10 * (preco < 100) + 0.20 * (preco >= 100);
    preco = preco * (1 + inflacao);
    printf("Preço final do produto: %.2f\n", preco);

    return 0;
}
