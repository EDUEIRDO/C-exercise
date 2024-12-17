#include <stdio.h>

int main() {
    int num1, num2, resultado;
    char resultado1, resultado2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    resultado = num1 > num2 && "ordem crescente: %d, %d", num1, num2 || "Ordem decrescente: %d, %d", num2, num1;
    return 0;
}

/*#include <stdio.h>
//Nao tenho ideia de como resolver
int main() {
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    int diferenca = num2 - num1;
    int crescente = diferenca > 0;

    for (int i = num1; i <= num2 + crescente; i += crescente) {
        printf("%d ", i);
    }
//Nessa tentativa foi utilizada a ?
    printf("%s\n", diferenca == 0 ? "valores iguais" : "");

    return 0;
}

//Encontrei esse bitwise em um forum, mas não me veio a mente o que posso
//fazer para determinar se um é maior que o outro com isso
int maior_num(int a, int b) {
    int diferenca = a- b;
    int mascara = diferenca >> (sizeof(int) * 8 - 1);
    return a- (diferenca & mascara);
}

int main() {
    int nums[2], maior;

    printf("Digite o primeiro valor: ");
    scanf("%d", &nums[0]);

    printf("Digite o segundo numero: ");
    scanf("%d", &nums[1]);

    maior = maior_num(nums[0], nums[1]);

    printf("O maior numero entre os dois: %d\n", maior);
    return 0;
}
*/
/*
Vetor, porem abs usa condição.
#include <stdio.h>
#include <stdlib.h>


int main () {
    int num1, num2, indice;
    char vetor[2] = {0, 1};
    vetor[0] = "Numero %d maior", num1;
    vetor[1] = "Numero %d maior", num2;
    printf("Digite um valor: ");
    scanf("%d\n", &num1);

    printf("Digite um segundo valor: ");
    scanf("%d\n", &num2);
    
    indice = (vetor[0] + vetor[1] + abs(vetor[0] - vetor[1])) / 2;

    printf("O maior valor entre esses numeros: %d\n", indice);
    return 0;

}

*/