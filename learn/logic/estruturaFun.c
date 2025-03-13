#include <stdio.h>
#include <string.h>

typedef struct {
    char titulo[100];
    char autor[50];
    float preco;
} Livro;

void exibirLivro(Livro livro) {
    printf("Titulo: %s\n", livro.titulo);
    printf("Autor: %s\n", livro.autor);
    printf("Preco: %.2f\n", livro.preco);
}

void alterarPreco(Livro *livro, float novoPreco) {
    livro->preco = novoPreco;
}

int main () {
    Livro livro1 = {"O gato de bolas", "Autor desconhecido", 25.99};
    exibirLivro(livro1);
    alterarPreco(&livro1, 30.00);
    printf("Apos alterar:\n");
    exibirLivro(livro1);

    return 0;
}