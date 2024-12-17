#include <stdio.h>

int main() {

    int idade;
    const char *resposta;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    resposta = (idade < 15) ? "Crian;a" : 
            (idade >=15 && idade <18) ? "Adolescente" :
            (idade >=18 && idade<=50) ? "Adulto" : "Idoso";

    printf("Essa pessoa ser %s\n", resposta);

    return 0;
}