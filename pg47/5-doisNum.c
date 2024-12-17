#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, NULL);
    double num1, num2;
    double raiz_quadrada, modulo, seno;
    printf("Insira um número: ");   
    scanf("%lf", &num1);

    printf("Insira outro numero: ");
    scanf("%lf", &num2);

    raiz_quadrada = sqrt(pow(num1, 2) + pow(num2, 2));
    seno = sin(num1 - num2);
    modulo = fabs(num1);

    
    printf("A soma dos dois números: %.2f\n", num1 + num2);
    printf("O produto do primeiro pelo quadrado do segundo: %.2f\n", num1 * (num2 * num2));
    printf("O quadrado do primeiro: %.2f\n", num1 * num1);
    printf("A raiz quadrada da soma dos quadrados: %.2f\n", raiz_quadrada);
    printf("O seno da diferença do primeiro número pelo segundo: %.2f\n", seno);
    printf("Modulo do primeiro número: %.2f\n", modulo);

    return 0;
}