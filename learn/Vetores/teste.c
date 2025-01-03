#include <stdio.h>

int main() {
    float notas[5] = {7, 8, 8.5, 9.5, 5.2};

    for (int i = 0; i <= 4; i++) {
        printf("notas[%d] = %.1f\n", i, notas[i]);
    }
    return 0;
}