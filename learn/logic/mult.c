#include <stdio.h>

int main() {
    int a, b, multi;
    printf("Digite o valor do primeiro numero: ");
    scanf("%d", &a);
        printf("Digite o segundo numero: ");
        scanf("%d", &b);

    multi = a * b;
    printf("O valor final da multiplicacao e: %2d\n", multi);
    return 0;
}