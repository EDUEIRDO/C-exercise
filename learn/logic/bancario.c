#include <stdio.h>

typedef struct {
    int numero;
    char titular[50];
    float saldo;
} Conta;

void depositarValor(Conta *conta, float addSaldo) {
    conta->saldo = addSaldo;
}

void sacarValor(Conta conta) {

}

int main() {
    
}