#include <stdio.h>

int main() {
    int num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    (num1 > num2 && printf("Ordem decrescente: %d, %d\n", num1, num2)) || printf("Ordem crescente: %d, %d\n", num1, num2);
    return 0;
}