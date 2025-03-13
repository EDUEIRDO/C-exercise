#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float salario;
} Funcionario;

float calcularMediaSalarial(float salario[5]) {
    float soma = 0;
    for (int i = 0; i < 5; i++) {
        soma += salario[i];
    }
        return soma / 5;
}

