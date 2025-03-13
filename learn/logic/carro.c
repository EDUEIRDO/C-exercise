#include <stdio.h>
#include <string.h>

typedef struct {
    char marca[30];
    char modelo[30];
    int ano;
} Carro;

int main () {
    Carro carros[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Digite os dados do carro:\n");
        printf("Marca: %s\n", scanf(carros[i].marca));
        printf("Modelo: %s\n", scanf(carros[i].modelo));
        printf("Ano: %d\n", scanf(carros[i].ano));
    }

    printf("Os dados dos carros:\n");
    for (i = 0; i < 3; i++) {
        printf("Carro %d:\n", i + 1);
        printf("Marca: %s\n", carros[i].marca);
        printf("Modelo: %s\n", carros[i].modelo);
        printf("Ano: %s\n", carros[i].ano);
    }
    return 0;
}