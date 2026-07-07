#include <stdio.h>
#define MAX 11
int main()
{
    int num;
    int resposta;
    int aux;
    printf("DIGITE SEU NUMERO:\n");
    scanf("%d", &num);
    for(int i =1; i<MAX; i++){
        aux=num*i;
        printf("VOCE QUER CONTINUAR?(1=SIM)(0=NÃO)\n");
        scanf("%d", &resposta);
    if(resposta==1){
        printf("A TABUADA:\n");
    printf("%d\n", aux);
    }else{
        return 0;
    
} } }
