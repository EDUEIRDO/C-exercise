#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[50];
    char position[25];
    float salary;
} Worker;


int main()
{
    FILE *saveInfo;
    Worker worker;
    printf("Digite o nome do funcionario: ");
    fgets(worker.name, sizeof(worker.name), stdin);
    printf("Digite a vaga do funcionario: ");
    fgets(worker.position, sizeof(worker.position), stdin);
    printf("Digite o salario do funcionario: ");
    scanf("%f", &worker.salary);
    getchar();

    saveInfo = fopen("employeeInfo.txt", "w");

    fprintf(saveInfo, "Nome: %s\n", worker.name);
    fprintf(saveInfo, "Vaga: %s\n", worker.position);
    fprintf(saveInfo, "Salario: %.3f\n", worker.salary);

    fclose(saveInfo);

    return 0;
}