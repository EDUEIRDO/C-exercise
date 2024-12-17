#include <stdio.h>

int main() {
    double num1, num2;
    char operador;

    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);

    printf("Digite o segundo número: ");
    scanf("%lf", &num2);

    switch(operador) {
        case '+':
            printf("Resultado: %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("Resultado: %.2lf\n", num1 - num2);
            break;
        case '*':
            printf("Resultado: %.2lf\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Resultado: %.2lf\n", num1 / num2);
            } else {
                printf("Erro: Divisão por zero não permitida.\n");
            }
            break;
        default:
            printf("Operador inválido.\n");
            break;
    }
    return 0;
}
