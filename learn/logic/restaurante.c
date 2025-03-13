#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 10  //Capacidade máxima de pedidos

//Estrutura de um pedido
typedef struct {
    int id;            //ID do pedido
    char item[50];     //nome do prato
} Pedido;

//Estrutura de uma fila(FIFO)
typedef struct {
    Pedido pedidos[SIZE];
    int front, rear;
} Fila;

//Estrutura de uma pilha(LIFO)
typedef struct {
    Pedido pedidos[SIZE];
    int top;
} Pilha;

//Funções para Fila(FIFO)

void inicializarFila(Fila *fila) {
    fila->front = -1;
    fila->rear = -1;
}

int filaVazia(Fila *fila) {
    return fila->front == -1 || fila->front > fila->rear;
}

int filaCheia(Fila *fila) {
    return fila->rear == SIZE - 1;
}

void enfileirar(Fila *fila, Pedido pedido) {
    if (filaCheia(fila)) {
        printf("A fila está cheia. não é possível adicionar mais pedidos.\n");
        return;
    }
    if (fila->front == -1) fila->front = 0;
    fila->pedidos[++fila->rear] = pedido;
    printf("Pedido #%d (%s) adicionado à fila.\n", pedido.id, pedido.item);
}

Pedido desenfileirar(Fila *fila) {
    if (filaVazia(fila)) {
        printf("A fila está vazia. Nenhum pedido a processar.\n");
        Pedido vazio = {-1, ""};
        return vazio;
    }
    return fila->pedidos[fila->front++];
}

//Funções para Pilha(LIFO)

void inicializarPilha(Pilha *pilha) {
    pilha->top = -1;
}

int pilhaVazia(Pilha *pilha) {
    return pilha->top == -1;
}

int pilhaCheia(Pilha *pilha) {
    return pilha->top == SIZE - 1;
}

void empilhar(Pilha *pilha, Pedido pedido) {
    if (pilhaCheia(pilha)) {
        printf("A pilha está cheia. Não é possível adicionar mais pedidos.\n");
        return;
    }
    pilha->pedidos[++pilha->top] = pedido;
    printf("Pedido #%d (%s) adicionado à pilha.\n", pedido.id, pedido.item);
}

Pedido desempilhar(Pilha *pilha) {
    if (pilhaVazia(pilha)) {
        printf("A pilha está vazia. Nenhum pedido a processar.\n");
        Pedido vazio = {-1, ""};
        return vazio;
    }
    return pilha->pedidos[pilha->top--];
}

//Receber pedidos
void receberPedidos(Fila *fila, Pilha *pilha, int *proximoId) {
    char escolha;
    printf("Adicionar à fila (F) ou pilha (P)? ");
    scanf(" %c", &escolha);

    Pedido pedido;
    pedido.id = (*proximoId)++;
    printf("Digite o nome do prato: ");
    scanf(" %[^\n]s", pedido.item);

    if (escolha == 'F' || escolha == 'f') {
        enfileirar(fila, pedido);
    } else if (escolha == 'P' || escolha == 'p') {
        empilhar(pilha, pedido);
    } else {
        printf("Opção inválida. Pedido não adicionado.\n");
    }
}

//Processar pedidos
void processarPedidos(Fila *fila, Pilha *pilha) {
    char escolha;
    printf("Processar pedido da fila (F) ou pilha (P)? ");
    scanf(" %c", &escolha);

    Pedido pedido;

    if (escolha == 'F' || escolha == 'f') {
        pedido = desenfileirar(fila);
    } else if (escolha == 'P' || escolha == 'p') {
        pedido = desempilhar(pilha);
    } else {
        printf("Opção inválida. Nenhum pedido processado.\n");
        return;
    }

    if (pedido.id != -1) {
        printf("Processando Pedido #%d (%s)... Pedido pronto!\n", pedido.id, pedido.item);
    }
}

//Exibir status
void exibirStatus(Fila *fila, Pilha *pilha) {
    printf("\n--- Status Atual ---\n");

    printf("Fila (FIFO): ");
    if (filaVazia(fila)) {
        printf("Vazia\n");
    } else {
        for (int i = fila->front; i <= fila->rear; i++) {
            printf("#%d (%s) ", fila->pedidos[i].id, fila->pedidos[i].item);
        }
        printf("\n");
    }

    printf("Pilha (LIFO): ");
    if (pilhaVazia(pilha)) {
        printf("Vazia\n");
    } else {
        for (int i = 0; i <= pilha->top; i++) {
            printf("#%d (%s) ", pilha->pedidos[i].id, pilha->pedidos[i].item);
        }
        printf("\n");
    }
    printf("--------------------\n");
}

//Função principal
int main() {
    Fila fila;
    Pilha pilha;
    int proximoId = 1;  //ID inicial do pedido

    inicializarFila(&fila);
    inicializarPilha(&pilha);

    int opcao;
    do {
        printf("\n1. Receber Pedido\n");
        printf("2. Processar Pedido\n");
        printf("3. Exibir Status\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                receberPedidos(&fila, &pilha, &proximoId);
                break;
            case 2:
                processarPedidos(&fila, &pilha);
                break;
            case 3:
                exibirStatus(&fila, &pilha);
                break;
            case 4:
                printf("Encerrando o sistema.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 4);
    return 0;
}

/*??????????????????????????????????????????????????????????????????????????????????????????????????????????????????????
???????????????????????????????????????????????????????????????????????????????????????????????????????////
???????????????????????????????????????????????????????????????????????????????????//*/