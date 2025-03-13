#include <stdio.h>

int main()
{
    int num;

    for (num = 0; num < 50; num++)
    {
        if (num % 2 == 1)
        {
            printf("Impar: %d\n", num);
        }
        else
        {
            printf("Par\n");
        }
    
    }

    return 0;
}