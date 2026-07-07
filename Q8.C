#include <math.h>
#include <stdio.h>

int main()
{
    int num;
    int num2;
    int mt;
    int mt2;
    printf("DIGITE SEU NUMERO:\n");
    scanf("%d", &num);
    printf("DIGITE SEU OUTRO NUMERO:\n");
    scanf("%d", &num2);
    mt= pow(num, num2);
    mt2=pow(num2, num);
    
    printf("O SEU PRIMEIRO NUMERO ELEVADO AO SEGUNDO NUMERO É:%d\n", mt);
    printf("O SEU SEGUNDO NUMERO ELEVADO AO PRIMEIRO NUMERO É:%d\n", mt2);

    return 0;
} 
