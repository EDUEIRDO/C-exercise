#include <stdio.h>

int main () {
    int numero;

    printf("Digite um numero positivo inteiro :\n");
    scanf("%d", &numero);
    if (numero <= 0) {
        printf("Digite um numero valido\n");
    } else {
        int soma = numero * (numero + 1) / 2;
        printf("A soma dos numeros de 1 ate %d = %d\n", numero, soma);
    }
    return 0;
}