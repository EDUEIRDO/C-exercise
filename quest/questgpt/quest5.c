#include <stdio.h>

int main() {
    int num, i;
    int serPrimo = 1;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    if (num <=1) {
        printf("Digite um numero valido");
    } else{
        for(i = 2; i <= num / 2; i++) {
            if (num % i !== 0) {
                printf("%d ser numero primo.\n", num);
            } else{
                printf("%d nao ser numero primo\n", num);
            }
        }
    }
    return 0;
}