#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    printf("Fahrenheit = %.2f\n", fahrenheit);

   
