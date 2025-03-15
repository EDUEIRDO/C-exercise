#include <stdio.h>

int main()
{

    float array[] = {5.0, 4.0, 3.0, 2.0, 1.0};

    printf("%d bytes\n", sizeof(array));

    for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
    {
        printf("$%.2f\n", array[i]);
    }
    return 0;
}
//array