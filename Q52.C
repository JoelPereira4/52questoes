#include <stdio.h>

int main() {
    int idade;
    int acidente;

    float salarioBruto;
    float salarioLiquido;

    int qtdAcidentes = 0;
    int somaIdadesAcidentes = 0;

    float totalSalariosLiquidos = 0;

    while(1) {

        printf("Idade: ");
        scanf("%d", &idade);

        printf("Salario bruto: ");
        scanf("%f", &salarioBruto);

        if(salarioBruto < 0)
            break;

        printf("Teve acidente? (1-Sim / 0-Nao): ");
        scanf("%d", &acidente);

        if(salarioBruto > 1500)
            salarioLiquido = salarioBruto * 0.90;
        else
            salarioLiquido = salarioBruto;

        totalSalariosLiquidos += salarioLiquido;

        if(acidente == 1) {
            qtdAcidentes++;
            somaIdadesAcidentes += idade;
        }
    }

    if(qtdAcidentes > 0) {
        printf("Media idade dos acidentados: %.2f\n",
               (float)somaIdadesAcidentes /
               qtdAcidentes);
    }

    printf("Total salarios liquidos pagos: R$ %.2f\n",
           totalSalariosLiquidos);

    return 0;
}
