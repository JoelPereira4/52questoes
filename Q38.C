#include <stdio.h>

int main() {
    char nome[100];
    int horas, dependentes;
    float salarioBruto, desconto, salarioLiquido;

    printf("Nome: ");
    scanf(" %[^\n]", nome);

    printf("Horas trabalhadas: ");
    scanf("%d", &horas);

    printf("Dependentes: ");
    scanf("%d", &dependentes);

    salarioBruto = horas * 3.0 + dependentes * 100.0;

    desconto = salarioBruto * 0.135;

    salarioLiquido = salarioBruto - desconto;

    printf("\nFuncionario: %s\n", nome);
    printf("Salario liquido: R$ %.2f\n", salarioLiquido);

    return 0;
}
