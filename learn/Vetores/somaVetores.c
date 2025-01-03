#include <stdio.h>

int main() {

    int vetor[3] = {1,2,3}, vetor1[3] = {3,2,1}, soma = 0, i;

    for (i = 0; i < 3; i++) {
        soma += vetor[i] + vetor1[i];
    }

    printf("O resultado da soma dos vetores e: %d\n", soma);

    return 0;
}