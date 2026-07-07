#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2;
    float distancia;

    printf("X1: ");
    scanf("%f", &x1);

    printf("Y1: ");
    scanf("%f", &y1);

    printf("X2: ");
    scanf("%f", &x2);

    printf("Y2: ");
    scanf("%f", &y2);

    distancia = sqrt(
        pow(x2 - x1, 2) +
        pow(y2 - y1, 2)
    );

    printf("Distancia = %.2f\n", distancia);

    return 0;
}
