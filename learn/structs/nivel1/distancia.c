#include <stdio.h>
#include <math.h>

typedef struct {
    float x, y;
} Ponto;

float distancia(Ponto p1, Ponto p2) {
    float dx = p2.x - p1.x;
    float xy = p2.y - p1.y;
    return sqrt(dx * dx + dy * dy);
}

int main() {
    Ponto p1, p2;

    printf("Digite a coordenada do primeiro ponto (x y): ");
    scanf("%f %f", &p1.x, &p1.y);

    printf("Agora digite a coordenada do segundo ponto (x y): ");
    scanf("%f %f", &p2.x, &p2.y);

    float distanciaEntrePontos = distancia(p1, p2);

    printf("A distancia entre os pontos fornecidos e: %.2f\n", distanciaEntrePontos);

    return 0;
}