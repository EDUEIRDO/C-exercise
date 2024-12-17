#include <stdio.h>

int main() {
    int numero;
    char *resposta;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    resposta = (numero % 2 ==0) ? "Par" : "Impar";

    printf("O numero %d ser %s\n",numero, resposta);

    return 0;
}