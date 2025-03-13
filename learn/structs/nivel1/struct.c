#include <stdio.h>
#include <string.h>

int somar(int value1, int value2)
{
    int resultValue = value1 + value2;
    return resultValue;
}

int subtrair(int value1, int value2)
{
    int resultValue = value1 - value2;
    return resultValue;
}

float dividir(float value1, float value2)
{
    float resultValue = value1 / value2;
    return resultValue;
}

int multiplicar(int value1, int value2)
{
    int resultValue = value1 * value2;
    return resultValue;
}

typedef struct
{
    char name[50];
    int age;
    float height;

} Person;


int main()
{
    Person person[3];
    printf("Soma: %d\n", somar(5, 5));
    printf("Subtrair: %d\n", subtrair(5, 5));
    printf("Dividir: %.2f\n", dividir(5, 5));
    printf("Multiplicar: %d\n", multiplicar(5, 5));

    for (int i = 0; i < 3; i++)
    {
        //person 1
        printf("Digite os dados da pessoa %d\n", i + 1);
        printf("Digite o nome: ");
        fgets(person[i].name, sizeof(person[i].name), stdin);
        person[i].name[strcspn(person[i].name, "\n")] = 0;
        printf("Digite a idade: ");
        scanf("%d", &person[i].age);
        getchar();
        printf("Digite a altura: ");
        scanf("%f", &person[i].height);
        getchar();
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Os dados da pessoa %d\n", i + 1);
        printf("Nome: %s\n", person[i].name);
        printf("Idade: %d\n", person[i].age);
        printf("Altura: %.2f\n", person[i].height);
    }

    return 0;
}