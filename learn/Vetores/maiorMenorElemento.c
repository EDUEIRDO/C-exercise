#include <stdio.h>

#define TAM 15

int main() {
    int vetor[TAM], i, maior, menor;

    printf("Digite 15 numeros inteiros: \n");
    for (i = 0; i < TAM; i++) {
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    for (i = 1; i < TAM; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }


    menor = vetor[0];
    for (i = 1; i < TAM; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    printf("Vetor: ");
    for (i = 0; i < TAM; i++) {
        printf("%i", vetor[i]);
    }

    printf("\nMaior valor: %i\n", maior);
    printf("\nMenor valor: %i\n", menor);

    return 0;
}