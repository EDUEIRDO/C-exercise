#include <stdio.h>
#include <string.h>

typedef struct
{
    int day;
    int month;
    int year;
}Data;

typedef struct
{
    char name[50];
    int registration;
    Data born;
}User;


int main()
{
    User user;
    printf("Digite os dados do aluno: ");

    printf("Digite o nome: ");
    fgets(user.name, sizeof(user.name), stdin);
    user.name[strcspn(user.name, "\n")] = 0;
    printf("Digite a matricula: ");
    scanf("%d", &user.registration);
    printf("Digite o dia de nascimento: ");
    scanf("%d", &user.born.day);
    printf("Digite o mes de nascimento: ");
    scanf("%d", &user.born.month);
    printf("Digite o ano de nascimento: ");
    scanf("%d", &user.born.year);

    // Show info

    printf("O nome do aluno: %s\n", user.name);
    printf("A matricula: %d\n", user.registration);
    printf("A data de nascimento: %d/%d/%d\n", user.born.day, user.born.month, user.born.year);
}