#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;
    const char *resposta;

    printf("Digite sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite sua segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite sua terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    resposta = (media >= 7.0) ? "Aprovado" : (media >= 5.0 && media < 7.0) ? "Recuperacao" : "Reprovado";

    printf("A media do aluno : %.2f. Status do aluno: %s\n", media, resposta);

    return 0;
}