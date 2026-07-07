#include <stdio.h>

int main() {
    int anos;
    int cigarrosDia;
    float precoCarteira;

    printf("Anos fumando: ");
    scanf("%d", &anos);

    printf("Cigarros por dia: ");
    scanf("%d", &cigarrosDia);

    printf("Preco da carteira: ");
    scanf("%f", &precoCarteira);

    int totalCigarros = anos * 365 * cigarrosDia;

    float gasto =
        (totalCigarros / 20.0) * precoCarteira;

    printf("Total gasto: R$ %.2f\n", gasto);

    return 0;
}
