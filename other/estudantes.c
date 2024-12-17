#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
    float notas[3];
} Estudante;

float calcularMedia(float notas[3]) {
    float soma =0;
    for (int i = 0; i < 3; i++) {
        soma += notas[i];
    }
    return soma / 3;
}

int main () {
    Estudante estudantes[2];
    float maiorMedia[2];

    for (int i = 0; i < 2; i++) {
        printf("Digite os dados do estudante %d:\n", i + 1);
        printf("Nome: ", scanf("%s", estudantes[i].nome));
        printf("Idade: ", scanf("%s", estudantes[i].idade));
        printf("Notas(3): ");
        for (int j = 0; j < 3; j++) {
            scanf("%f", &estudantes[i].notas[j]);
        }
        maiorMedia[i] = calcularMedia(estudantes[i].notas);
    }

    int indice = 0;
    if (maiorMedia[1] > maiorMedia[0]) {
        indice = 1;
    }
    printf("\nEstudantes com a maior media:\n");
    printf("Nome: %s\n", estudantes[indice].nome);
    printf("Media: %f\n", maiorMedia[indice]);

    return 0;
}