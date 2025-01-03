#include <stdio.h>

int main() {
    
    int vetor[3] = {1, 2, 3}, vetor1[3] = {1, 2, 3}, soma[3];

    for(int i = 0; i < 3; i++) {
        soma[i] = vetor[i] + vetor1[i];
        printf("Posicao %d: %d\n", i, soma[i]);
    }

    return 0;
}