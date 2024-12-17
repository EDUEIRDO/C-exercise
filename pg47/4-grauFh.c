#include <stdio.h>

int main() {
    float grauFahrenheit, celcius;
    printf("Digite o valor do clima em Fh: ");
    scanf("%f", &grauFahrenheit);

    printf("O valor do clima em Celcius: %f\n", celcius = (grauFahrenheit-32.0) * (5.0/9.0));

    return 0;
}