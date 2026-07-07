#include <stdio.h>

int main() {
    int N;

    do {
        printf("Digite N: ");
        scanf("%d", &N);

        if (N == 0)
            break;

        int soma = 0;
        int impar = 1;
        int termos = 0;

        while (soma < N) {
            soma += impar;
            impar += 2;
            termos++;
        }

        if (soma == N)
            printf("Raiz quadrada = %d\n", termos);
        else
            printf("Nao é quadrado perfeito\n");

    } while (1);

    return 0;
}
