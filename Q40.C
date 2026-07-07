#include <stdio.h>

int main() {
    int A, B, C;
    int R, S;
    float D;

    printf("Digite A: ");
    scanf("%d", &A);

    printf("Digite B: ");
    scanf("%d", &B);

    printf("Digite C: ");
    scanf("%d", &C);

    R = (A + B) * (A + B);
    S = (B + C) * (B + C);

    D = (R + S) / 2.0;

    printf("D = %.2f\n", D);

    return 0;
}
