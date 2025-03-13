#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome [50];
    char cpf[12];
    float valorCompra;
} Cliente;

//Precisei de ajuda aqui, ainda nao entendi muito bem a realocacao de memoria
Cliente* realocarListaClientes(Cliente* lista, int* tamanhoAtual) {
    (*tamanhoAtual)++;
    lista = (Cliente*)realloc(lista, (*tamanhoAtual) * sizeof(Cliente));
    if (lista == NULL) {
        printf("Erro ao realocar memoria.\n");
        exit(1);
    }
    return lista;
}

void cadastrarCliente(Cliente *cliente) {
    getchar();
    printf("Digite o nome do cliente: ");
    scanf("%[^\n]", cliente->nome);
    getchar();
    printf("Digite o CPF do cliente sem pontos ou traços: ");
    scanf("%s", cliente->cpf);
    printf("Digite o valor da compra: ");
    scanf("%f", &cliente->valorCompra);
}

void imprimirCliente(Cliente* cliente) {
    printf("Nome: %s\n", cliente->nome);
    printf("CPF: %s\n", cliente->cpf);
    printf("Valor da compra: %.2f\n", cliente->valorCompra);
}

void imprimirListaClientes(Cliente* lista, int tamanho) {
    if (tamanho ==0) {
        printf("Nenhum cliente cadastrado.\n");
        return;
    }
    for (int i= 0; i< tamanho; i++) {
        printf("Cliente: %d:\n", i +1);
        imprimirCliente(&lista[i]);
    }
}

void liberarListaClientes(Cliente* lista) {
    free(lista);
    printf("Memoria liberada.\n");
}

int main () {
    Cliente* listaClientes = NULL;
    int tamanhoAtual = 0, opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Cadastrar Cliente\n");
        printf("2. Imprimir Lista de Clientes\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: 
            listaClientes = realocarListaClientes(listaClientes, &tamanhoAtual);
            cadastrarCliente(&listaClientes[tamanhoAtual - 1]);
                break;

            case 2:
                if (tamanhoAtual == 0) {
                    printf("Nenhum cliente cadastrado.\n");
                } else {
                    imprimirListaClientes(listaClientes, tamanhoAtual);
                }
                break;
            case 3: 
            liberarListaClientes(listaClientes);
                break;
            defalut:
                printf("Opcao invalida.\n");
                break;
        }
    } while (opcao !=3);

    return 0;
}

