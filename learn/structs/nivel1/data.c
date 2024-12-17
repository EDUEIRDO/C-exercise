#include <stdio.h>

typedef struct {
    int dia, mes, ano;
} Data;

int main() {
    Data data;
    const char *verificador;

    // Entrada dos dados
    printf("Digite um dia do mes: ");
    scanf("%d", &data.dia);

    printf("Digite o mes do ano: ");
    scanf("%d", &data.mes);

    printf("Digite um ano (sem anos bissextos): ");
    scanf("%d", &data.ano);

    // Verificação do mês
    if (data.mes < 1 || data.mes > 12) {
        verificador = "Data invalida";
    } else {
        // Número máximo de dias por mês
        int diasNoMes = 31;
        if (data.mes == 4 || data.mes == 6 || data.mes == 9 || data.mes == 11) {
            diasNoMes = 30;
        } else if (data.mes == 2) {
            diasNoMes = 28; // Sem anos bissextos
        }

        // Verificação do dia
        if (data.dia < 1 || data.dia > diasNoMes) {
            verificador = "Data invalida";
        } else {
            verificador = (data.ano >= 0) ? "Data valida" : "Data invalida";
        }
    }

    // Saída
    printf("Sua data fornecida é: %s\n", verificador);

    return 0;
}
