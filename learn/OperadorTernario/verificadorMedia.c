#include <stdio.h>

int main() {
    float nota1, nota2, media;
    char *verificador;

    printf("Digite a sua primeira nota: ");
    scanf("%f", &nota1);

    printf("Agora digite sua segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;
    verificador = (media >= 6.0) ? "Aprovado" : "Reprovado";

    printf("O aluno com media %.1f foi %s\n", media, verificador); 

    return 0;
}
