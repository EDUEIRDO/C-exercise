#include <stdio.h>
#include <string.h>

#define MAX 50
int memo[MAX];

int fibonacci(int num)
{
    if (num <= 1)
    {
        return num;
    }
    if (memo[num] != -1)
    {
        return memo[num];
    }
    return memo[num] = fibonacci(num -1) + fibonacci(num -2);
}

int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Error");
        return 1;
    }
    memset(memo, -1, sizeof(memo));

    printf("Sequencia de fibonacci: %d\n", num);
    for (int i = 0; i <= num; i++)
    {
        printf("%d ", fibonacci(i));
    }
    printf("Fibonacci(%d) = %d\n", num, fibonacci(num));
    return 0;
}