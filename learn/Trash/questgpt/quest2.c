#include <stdio.h>

int main() {
    int numero, soma = 0;
    printf("Digite um numero inteiro positivo: \n");
    scanf("%d\n", &numero);
    if (numero <= 0) {
        printf("Digite um numero positivo\n");
    } else {
        for (int i = 1; i <= numero; i++) {
            soma += i;
        }

        printf("A soma dos numeros de 1 ate %d = %d\n", numero, soma);
    }

    return 0;
}