#include <math.h>
#include <stdio.h>

int main()
{
    int num;
    int num2;
    printf("DIGITE SEU NUMERO:\n");
    scanf("%d", &num);
    printf("DIGITE SEU SEGUNDO NUMERO:\n");
    scanf("%d", &num2);
    
    printf("O RESTO DO SEU PRIMEIRO NUMERO DIVIDIDO PELO SEGUNDO:%d\n", num%num2);
    return 0;
} 
