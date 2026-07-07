#include <stdio.h>

int main() {
    float largura, comprimento;
    float areaTotal = 0;
    int continuar = 1;

    while (continuar == 1) {
        printf("Largura: ");
        scanf("%f", &largura);

        printf("Comprimento: ");
        scanf("%f", &comprimento);

        areaTotal += largura * comprimento;

        printf("Continuar? (1-Sim / 0-Nao): ");
        scanf("%d", &continuar);
    }

    printf("Area total da residencia: %.2f m2\n", areaTotal);

    return 0;
}
