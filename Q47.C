#include <stdio.h>

int main() {
    float salarioFixo;
    int quantidade;

    float salarioFinal;
    float somaSalarios = 0;
    float maiorSalarioFixo = 0;

    for(int i = 1; i <= 1200; i++) {

        printf("Funcionario %d\n", i);

        printf("Salario fixo: ");
        scanf("%f", &salarioFixo);

        printf("Quantidade de produtos: ");
        scanf("%d", &quantidade);

        if(quantidade <= 5)
            salarioFinal = salarioFixo + quantidade * 1.5;
        else if(quantidade <= 50)
            salarioFinal = salarioFixo + quantidade * 2.0;
        else
            salarioFinal = salarioFixo + quantidade * 2.5;

        printf("Salario do funcionario: %.2f\n",
               salarioFinal);

        somaSalarios += salarioFinal;

        if(salarioFixo > maiorSalarioFixo)
            maiorSalarioFixo = salarioFixo;
    }

    printf("\nMedia salarios = %.2f\n",
           somaSalarios / 1200);

    printf("Maior salario fixo = %.2f\n",
           maiorSalarioFixo);

    return 0;
}
