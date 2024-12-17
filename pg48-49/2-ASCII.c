#include <stdio.h>

int main () {
    for (int i = 0; i < 127; i++) {
        printf("Decimal: %d, Hexadecimal: %X, Caracter: %c\n ", i, i, i);
    }
    return 0;
}