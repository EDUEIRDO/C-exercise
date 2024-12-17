#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[100];
    float preco, precoFinal;
    int quantidadeEstoque;
} Produto;

int main() {
    Produto produto;

    printf("Digite o nome do produto: ");
    fgets(produto.nome, sizeof(produto.nome), stdin);

    printf("Digite o pre;o do produto: ");
    scanf("%f", &produto.preco);

    printf("Digite a quantidade no estoque: ");
    scanf("%d", &produto.quantidadeEstoque);

    printf("O valor total do estoque do produto e: %.2f\n", produto.precoFinal = produto.preco * produto.quantidadeEstoque);

    return 0;

}