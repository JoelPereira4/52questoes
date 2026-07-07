#include <math.h>
#include <stdio.h>

int main()
{
    int num;
    int num2;
    int sas;
    printf("DIGITE SEU NUMERO:\n");
    scanf("%d", &num);
    printf("DIGITE SEU SEGUNDO NUMERO:\n");
    scanf("%d", &num2);
    sas=num/num2;
    
    printf("O QUOCIENTE SEU PRIMEIRO NUMERO DIVIDIDO PELO SEGUNDO:%d\n", sas);
    return 0;
} 
