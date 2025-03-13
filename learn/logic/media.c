#include <stdio.h>

int main()
{
    float media, nota1, nota2, nota3;

    printf("Digite sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite sua segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite sua terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    if (media >= 7)
    {
        printf("Aprovado!\n");
    }
    else if (media < 7 && media >= 5)
    {
        printf("Recuperacao\n");
    }
    else
    {
        printf("Reprovado\n");
    }
    printf("%.2f\n", media);

    return 0;
}