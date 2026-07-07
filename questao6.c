#include <math.h>
#include <stdio.h>

int main()
{
    int num;
    float mt;
    printf("DIGITE SEU NUMERO:\n");
    scanf("%d", &num);
    mt= sqrt(num);
    
    printf("A RAIZ QUADRADA DO SEU NUMERO:%.2f\n", mt);
    return 0;
}
