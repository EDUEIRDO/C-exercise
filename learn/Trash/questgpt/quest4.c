#include <stdio.h>

int main() {
    int numero, i, fatorial = 1;

    printf("Digite um numero inteiro positivo: \n");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Digite um numero valido.");
    } else {
        for (i = 1; i <= numero; i++) {
            fatorial *= i;
        }
        printf("O fatorial de %d = %d\n", numero, fatorial);
    }
    return 0;
}