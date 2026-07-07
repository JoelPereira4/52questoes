#include <stdio.h>

int main() {
    float H, R;
    int N;

    float distancia;
    float alturaAtual;

    printf("Altura inicial H: ");
    scanf("%f", &H);

    printf("Coeficiente R: ");
    scanf("%f", &R);

    printf("Numero de saltos N: ");
    scanf("%d", &N);

    distancia = H;
    alturaAtual = H;

    for(int i = 1; i <= N; i++) {

        alturaAtual *= R;

        distancia += 2 * alturaAtual;
    }

    printf("Distancia percorrida = %.2f\n",
           distancia);

    printf("Altura do %d salto = %.2f\n",
           N, alturaAtual);

    return 0;
}
