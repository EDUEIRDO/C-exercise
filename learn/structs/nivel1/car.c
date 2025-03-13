#include <stdio.h>
#include <string.h>

typedef struct
{
    char brand[50];
    int year;
    float value;
} Car;

void editValue(Car *car)
{
    printf("Digite o novo valor do carro: ");
    scanf("%f", &car->value);
    getchar();
}

void showCar(Car car)
{
    printf("O modelo do carro: %s\n", car.brand);
    printf("O Ano: %d\n", car.year);
    printf("O valor: %f\n", car.value);
}

int main()
{
    Car car;

    printf("Digite o nome do carro: ");
    fgets(car.brand, sizeof(car.brand), stdin);
    car.brand[strcspn(car.brand, "\n")] = 0;
    printf("Digite o valor do carro: ");
    scanf("%f", &car.value);
    getchar();
    printf("Digite o ano: ");
    scanf("%d", &car.year);
    getchar();

    showCar(car);

    editValue(&car);

    showCar(car);
    return 0;
}