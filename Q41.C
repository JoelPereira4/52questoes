#include <stdio.h>

int main() {
    int codigo;
    char nome[100];
    int carrosVendidos;

    float totalVendas;
    float salarioFixo;
    float comissaoCarro;
    float salarioFinal;

    printf("Codigo do vendedor: ");
    scanf("%d", &codigo);

    printf("Nome do vendedor: ");
    scanf(" %[^\n]", nome);

    printf("Quantidade de carros vendidos: ");
    scanf("%d", &carrosVendidos);

    printf("Valor total das vendas: ");
    scanf("%f", &totalVendas);

    printf("Salario fixo: ");
    scanf("%f", &salarioFixo);

    printf("Comissao por carro: ");
    scanf("%f", &comissaoCarro);

    salarioFinal =
        salarioFixo +
        (carrosVendidos * comissaoCarro) +
        (totalVendas * 0.05);

    printf("\nCodigo: %d\n", codigo);
    printf("Nome: %s\n", nome);
    printf("Salario final: R$ %.2f\n", salarioFinal);

    return 0;
}
