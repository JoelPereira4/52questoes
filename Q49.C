#include <stdio.h>

int main() {
    int uso;

    int total = 0;
    int menos10 = 0;
    int entre10e15 = 0;
    int acima15 = 0;

    while(1) {

        printf("Numero de utilizacoes: ");
        scanf("%d", &uso);

        if(uso < 0)
            break;

        total++;

        if(uso < 10)
            menos10++;
        else if(uso <= 15)
            entre10e15++;
        else
            acima15++;
    }

    if(total > 0) {

        printf("Menos de 10 vezes: %.2f%%\n",
               menos10 * 100.0 / total);

        printf("Entre 10 e 15 vezes: %.2f%%\n",
               entre10e15 * 100.0 / total);

        printf("Acima de 15 vezes: %.2f%%\n",
               acima15 * 100.0 / total);

        printf("Total entrevistados: %d\n",
               total);
    }

    return 0;
}
