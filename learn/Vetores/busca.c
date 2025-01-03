#include <stdio.h>

int busca_linear(int vetor[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == valor) {
            return i;
        }
    }
    return -1;
}

int main() {
    int vetor[] = {2, 4, 6, 8, 10};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int valor_buscado;
    char mensagem[100];

    printf("Digite o valor a ser buscado: ");
    scanf("%d", &valor_buscado);

    int posicao = busca_linear(vetor, tamanho, valor_buscado);

    snprintf(
        mensagem, sizeof(mensagem), (posicao != -1) ? "O valor %d foi encontrado na posição %d.\n" : "O valor %d não foi encontrado.\n", valor_buscado, posicao
    );

    printf("%s\n", mensagem);

    return 0;
}