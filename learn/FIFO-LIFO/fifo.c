#include <stdio.h>

#define SIZE 5

typedef struct {
    int items[SIZE];
    int front, rear;
} Queue;

// Inicializa a fila
void initializeQueue(Queue *q) {
    q->front = -1;
    q->rear = -1;
}
// Verifica se a fila esta vazia
int isQueueEmpty(Queue *q) {
    return q->front == -1 || q->front > q->rear;
}
// Verifica se a fila esta cheia
int isQueueFull(Queue *q) {
    return q->rear == SIZE -1;
}
// Adiciona um elemento a fila
void enqueue(Queue *q, int value) {
    if (isQueueFull(q)) {
        printf("Log de fila cheia. Nao e possivel adicionar %d.\n", value);
        return;
    }
    if (q->front == -1) q->front =0;
    q->rear++;
    q->items[q->rear] = value;
    printf("Enfileirado: %d\n", value);
}
// Remove um elemento
int dequeue(Queue *q) {
    if (isQueueEmpty(q)) {
        printf("Fila vazia, not de elemento.\n");
        return -1;
    }
    int value = q->items[q->front];
    q->front++;
    return value;
}
// Mostra os elementos da fila
int displayQueue(Queue *q) {
    if (isQueueEmpty(q)) {
        printf("Log de fila vazia.\n");
        return;
    }
    printf("Fila: ");
    for (int i = q->front; i <= q->rear; i++) {
        printf("%d ", q->items[i]);
    }
    printf("\n");
}

int main() {
    Queue *q;
    initializeQueue(&q);
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    displayQueue(&q);

    printf("Desenfileirando: %d\n", dequeue(&q));
    displayQueue(&q);

    return 0;
}
