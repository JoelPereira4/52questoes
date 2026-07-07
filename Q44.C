#include <stdio.h>

int main() {

    printf("Celsius\tFahrenheit\n");

    for(int c = 0; c <= 50; c += 10) {

        float f = (c * 9.0 / 5.0) + 32;

        printf("%d\t%.2f\n", c, f);
    }

    return 0;
}
