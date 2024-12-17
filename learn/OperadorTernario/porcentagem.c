#include <stdio.h>

int main() {
    float valorCompra, valorFinal;
    int quantidade;

    printf("Digite a quantidade de itens comprado: ");
    scanf("%d", &quantidade);

    printf("Agora digite o valor da compra: ");
    scanf("%f", &valorCompra);

    valorFinal = (quantidade > 5) ? (valorCompra * 0.9) : valorCompra;

    printf("O valor final da compra :%.2f\n", valorFinal);

    return 0;
}