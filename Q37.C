#include <stdio.h>

int main() {
    float kmInicial, kmFinal;
    float litros, preco;
    float kmRodados, consumo, custo;

    printf("Km inicial: ");
    scanf("%f", &kmInicial);

    printf("Km final: ");
    scanf("%f", &kmFinal);

    printf("Litros gastos: ");
    scanf("%f", &litros);

    printf("Preco do combustivel: ");
    scanf("%f", &preco);

    kmRodados = kmFinal - kmInicial;
    consumo = kmRodados / litros;
    custo = litros * preco;

    printf("Km rodados: %.2f\n", kmRodados);
    printf("Km por litro: %.2f\n", consumo);
    printf("Custo da viagem: R$ %.2f\n", custo);

    return 0;
}
