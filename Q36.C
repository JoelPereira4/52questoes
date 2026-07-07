#include <stdio.h>

int main() {
    float largura, comprimento;
    int potenciaLampada;
    float area;
    int lampadas;

    printf("Potencia da lampada (W): ");
    scanf("%d", &potenciaLampada);

    printf("Largura: ");
    scanf("%f", &largura);

    printf("Comprimento: ");
    scanf("%f", &comprimento);

    area = largura * comprimento;

    lampadas = (area * 18) / potenciaLampada;

    if ((int)(area * 18) % potenciaLampada != 0)
        lampadas++;

    printf("Quantidade de lampadas: %d\n", lampadas);

    return 0;
}
