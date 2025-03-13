#include <stdio.h>

int main()
{
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    for (num; num !=0; --num)
    {
        printf("%d\n", num);
    }

    return 0;
}