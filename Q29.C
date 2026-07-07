#include <stdio.h>

int main() {
    int dias;
    int hospedes = 0;
    int mais20 = 0;
    int somaDias = 0;

    float valor, maiorConta = 0;
    float somaContas = 0;

    while(1) {
        printf("Quantidade de diarias: ");
        scanf("%d", &dias);

        if(dias == 0)
            break;

        valor = dias * 150.0;

        if(dias <= 5)
            valor *= 0.95;
        else if(dias <= 10)
            valor *= 0.90;
        else
            valor *= 0.85;

        printf("Valor a pagar: R$ %.2f\n", valor);

        hospedes++;
        somaContas += valor;
        somaDias += dias;

        if(dias > 20)
            mais20++;

        if(valor > maiorConta)
            maiorConta = valor;
    }

    printf("Hospedes acima de 20 dias: %d\n", mais20);

    if(hospedes > 0) {
        printf("Media contas: %.2f\n",
               somaContas / hospedes);

        printf("Media dias: %.2f\n",
               (float)somaDias / hospedes);

        printf("Maior conta: %.2f\n", maiorConta);
    }

    return 0;
}
