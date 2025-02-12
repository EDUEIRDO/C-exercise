#include <stdio.h>



int main() {
    int number, factorial;

    printf("Type a int number: ");
    scanf("%d", &number);

    for (factorial = 1; number > 1; number = number - 1) {
        factorial = factorial * number;
    }

    printf("%d\n", factorial);

    return 0;
}