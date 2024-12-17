#include <stdio.h>

int main() {
    float nota1, nota2, media;

    while (1) {
        printf("Digite a nota da primeira prova: ");
        scanf("%f", &nota1);

        if (nota1 == 50) {
            break;
        }
        printf("Digite a nota da segunda prova: ");
        scanf("%f", &nota2);

        if (nota1 >= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10) {
            media = (nota1 + nota2) / 2;

            printf("A média das notas é: %.2f\n", media);
        } else {
            printf("Digite notas entre 0 e 10.\n");
        }
    }

    printf("Programa encerrado.\n");
    return 0;
}
