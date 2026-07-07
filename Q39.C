#include <stdio.h>

int main() {
    float custoFabrica, custoConsumidor;

    printf("Custo de fabrica: ");
    scanf("%f", &custoFabrica);

    custoConsumidor =
        custoFabrica +
        (custoFabrica * 0.28) +
        (custoFabrica * 0.45);

    printf("Custo ao consumidor: R$ %.2f\n",
           custoConsumidor);

    return 0;
}
