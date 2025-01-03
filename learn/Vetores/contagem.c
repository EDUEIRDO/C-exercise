#include <stdio.h>

int main() {

    int vetor[3] = {2, 3, 4}, contadorImpar = 0, contadorPar = 0;

    for (int i = 0; i < 3; i++) {
        if (vetor[i] % 2 == 0) {
            contadorPar++;
        } else {
            contadorImpar++;
        }
    }

    printf("A quantidade de numeros pares e: %d, impares sao: %d\n", contadorPar, contadorImpar);

    return 0;
}