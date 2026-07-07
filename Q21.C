#include <stdio.h>
int main(){
    int num1;
    int num2;
    int aux=0;
    int i=0;
    printf ("Digite seu primeiro numero:\n");
    scanf("%d", &num1);
     printf ("Digite seu segundo numero:\n");
    scanf("%d", &num2);
 while(i<num1){
     aux+=num2;
     i++;
 } printf("O RESULTADO DA MULTIPLICAÇÃO:%d\n\n", aux);
 return 0;
}
