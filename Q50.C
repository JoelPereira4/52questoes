#include <stdio.h>

int main() {
    int numero;
    int tentativa;
    int acertou = 0;

    printf("Jogador 1 - Escolha um numero (1 a 10): ");
    scanf("%d", &numero);

    for(int i = 1; i <= 4; i++) {

        printf("Tentativa %d: ", i);
        scanf("%d", &tentativa);

        if(tentativa == numero) {
            printf("Acertou na tentativa %d!\n", i);
            acertou = 1;
            break;
        }
    }

    if(!acertou) {
        printf("Nao acertou.\n");
        printf("Numero escolhido: %d\n", numero);
    }

    return 0;
}
