#include <stdio.h>
#define MAX_LENGTH 100

int stack[MAX_LENGTH];
int top =-1;

void push(int value) {
    if(top == MAX_LENGTH - 1) {
        printf("Stack OVerflow\n");
    } else {
        stack[++top] = value;
    }
}

int pop() {
    if(top == -1) {
        printf("Stack Underflow\n");
        return -1;
    } else {
        return stack[top--];
    }
}

int peek() {
    if (top != -1) {
        return stack[top];
    } else {
        printf("Stack is empty\n");
        return -1;
    }
}

int main() {
    push(10);
    push(20);
    push(30);

    printf("Top elements is %d\n", peek());
    
    printf("Popped element is %d\n", pop());
    printf("Popped element is %d\n", pop());
    printf("Popped element is %d\n", pop());
    printf("Popped element is %d\n", pop()); // Tentativa de pop em uma pilha vazia

    return 0;
}