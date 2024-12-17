#include <stdio.h>

int main() {
    int fator1, fator2;

    for (fator1 = 1; fator1 <=10 ; fator1++) {
        printf("Tabuada do %d:\n", fator1);
        for (fator2 = 1; fator2 <= 10; fator2++) {
            printf("%d x %d = %d\n", fator1, fator2, fator1 * fator2);
        }
    }
    return 0;
}