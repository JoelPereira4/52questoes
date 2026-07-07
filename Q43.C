#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    printf("Celsius = %.2f\n", celsius);

    return 0;
}
