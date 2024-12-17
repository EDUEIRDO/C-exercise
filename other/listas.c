#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int quantidade;
    float preco;
} Produto;

int main () {
    Produto produto1;

    strcpy(produto1.nome, "smartTV");
    produto1.quantidade = 10;
    produto1.preco = 1500.00;

    printf("Produto: %s\n", produto1.nome);
    printf("Quantidade: %s\n", produto1.quantidade);
    printf("Preço: %s\n", produto1.preco);

    return 0;
}