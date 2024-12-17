#include <stdio.h>

int main() {
    int num1, num2, maior;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    maior = (num1 >= num2) ? num1 : num2;

    printf("O maior numero: %d\n", maior);

    return 0;
}