#include <stdio.h>

int main() {
    float altura;
    int sexo;

    float maior = 0, menor = 9999;
    int homens = 0;
    int mulheres = 0;
    float somaMulheres = 0;
    int mulheresAbaixo168 = 0;

    while (1) {
        printf("Altura: ");
        scanf("%f", &altura);

        if (altura <= 0)
            break;

        printf("Sexo (1-M, 2-F): ");
        scanf("%d", &sexo);

        if (altura > maior)
            maior = altura;

        if (altura < menor)
            menor = altura;

        if (sexo == 1) {
            homens++;
        } else if (sexo == 2) {
            mulheres++;
            somaMulheres += altura;

            if (altura < 1.68)
                mulheresAbaixo168++;
        }
    }

    printf("Maior altura: %.2f\n", maior);
    printf("Menor altura: %.2f\n", menor);
    printf("Numero de homens: %d\n", homens);

    if (mulheres > 0) {
        printf("Media altura mulheres: %.2f\n",
               somaMulheres / mulheres);

        printf("Percentual mulheres abaixo de 1.68: %.2f%%\n",
               (float)mulheresAbaixo168 * 100 / mulheres);
    }

    return 0;
}
