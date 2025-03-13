#include <stdio.h>
#include <string.h>

int main() {
    
    char numero[10], numeroInvertido[10];
    int i, j;

    printf("Digite um numero inteiro: ");
    scanf("%s", &numero);
    
    for (i = 0; j = strlen(numero) - 1; i < strlen(numero);i++, j--) {
        numeroInvertido[j] = numero[i];
    }

    if (!(strcmp(numeroInvertido, numero))) {
        printf("Palindromo\n");
    } else {
        printf("N palindromo\n");
    }

    return 0;
}