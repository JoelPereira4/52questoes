#include <stdio.h>

int main() {
    int vari;

    printf("DIGITE SEU NUMERO:\n");
    scanf("%d", &vari);

    if (vari % 2 == 0) {
        for (int i = 1; i <= 10; i++) {
            printf("%d\n", vari + 2 * i);
        }
    } else {
        printf("O numero nao e par.\n");
    }

    return 0;
}
