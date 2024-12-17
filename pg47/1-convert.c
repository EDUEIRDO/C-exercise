#include <stdio.h>

int main() {
    float metros, decimetros, centimetros, milimetros;

    printf("Digite o valor em metros: ");
    scanf("%f", &metros);

    decimetros = metros * 10;
    centimetros = metros * 100;
    milimetros = metros * 1000;
    printf("%.2f 1  metros = %.2f decimetros = %.2f centimetros = %.2f milimetros\n", metros, decimetros, centimetros, milimetros);

    return 0;
}