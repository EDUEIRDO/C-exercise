#include <stdio.h>

int main() {
    int vetor[10], i, soma = 0;

    printf("Digite 10 numeros inteiros: \n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i <10; i++) {
        soma += vetor[i];
    }

    printf("A soma dos elementos do vetor e: %d\n", soma);

    return 0;
}