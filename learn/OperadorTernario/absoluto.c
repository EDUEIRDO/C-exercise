#include <stdio.h>

int main() {
    int numero, valorAbsoluto;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    valorAbsoluto = (numero > 0) ? numero : (numero < 0) ? -numero : numero;

    printf("O valor absoluto de %d ser %d\n", numero, valorAbsoluto);

    return 0;
}

