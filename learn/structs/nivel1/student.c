#include <stdio.h>
#include <string.h>

typedef struct 
{
    char name[50];
    float note1;
    float note2;
    float average;
} Student;

void calculateNotes(Student *student)
{
    student->average = (student->note1 + student->note2) / 2;
    printf("A media do aluno: %.1f\n", student->average);
}

int main()
{
    Student student;

    printf("Digite os dados do aluno: ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = 0;
    printf("Digite a primeira nota: ");
    scanf("%f", &student.note1);
    getchar();
    printf("Digite a segunda nota: ");
    scanf("%f", &student.note2);
    getchar();
    calculateNotes(&student);

    return 0;
}