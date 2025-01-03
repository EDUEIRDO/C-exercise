#include <stdio.h>

int main() {
    int vetor[5] = {123, 456, 789, 101, 202}, invertido[5], resto;

    for (int i = 0; i < 5; i++) {
        int num = vetor[i]; // Criar uma cópia do elemento para não alterar o original
        invertido[i] = 0;
        while (num != 0) {
            resto = num % 10;
            invertido[i] = invertido[i] * 10 + resto;
            num /= 10;
        }
    }

    printf("O vetor invertido e:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", invertido[i]);
    }
    printf("\n");

    return 0;
}