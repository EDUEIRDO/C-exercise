#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, NULL);
    int numero;
    printf("Digite um numero decimal: ");
    scanf("%d", &numero);

    printf("Hexadecimal: %X\n", numero);
    printf("Hexadecimal: %o\n", numero);

    return 0;
}