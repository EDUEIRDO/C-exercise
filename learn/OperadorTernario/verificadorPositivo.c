#include <stdio.h>

int main() {
    int numero;
    char *verificador;
    printf("Digite um numero inteiro positivo ou negativo: ");
    scanf("%d", &numero);

    verificador = (numero > 0)? "Positivo" : ((numero == 0) ? "Zero" : "Negativo");

    printf("O numero %d ser %s\n", numero, verificador);

    return 0;
}