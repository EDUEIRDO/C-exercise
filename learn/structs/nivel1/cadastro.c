#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
    float altura;
} Pessoa;

int main() {
    Pessoa pessoa;
    printf("Digite seu nome: ");
    fgets(pessoa.nome, sizeof(pessoa.nome), stdin);
    pessoa.nome[strcspn(pessoa.nome, "\n")] = '\0';

    printf("Digite sua idade: ");
    scanf("%d", &pessoa.idade);

    printf("Digite sua altura: ");
    scanf("%f", &pessoa.altura);

    printf("Dados da pessoa\n");

    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Altura: %.2f\n", pessoa.altura);

    return 0;
}
