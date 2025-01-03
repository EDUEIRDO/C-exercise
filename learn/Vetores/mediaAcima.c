#include <stdio.h>

int main() {
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i;
    float media,  soma = 0;

    for(i = 0; i < 10; i++) {
        soma += vetor[i];
    }

    media = soma / 10;

    printf("A media dos numeros e:  %.2f\n", media);

    printf("Numeros acima da media: \n");
    for (i = 0; i <10; i++) {
        if (vetor[i] > media) {
            printf("%d ", vetor[i]);
        }
    }

    printf("\n");
    return 0;
}