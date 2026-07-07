#include <stdio.h>
#define MAX 5
int main()
{
    int num[MAX];
    int positivos=0;
    int va=0;
    for(int i =0; i<MAX; i++){
    printf("DIGITE O NUMERO:\n" );
    scanf("%d", &num[i]);
    if(num[i]>0){
        positivos++;
    }else{
        va++;
    }
    printf("Numeros positivos:%d\n", positivos);
    printf("Numeros diferente dos positivos:%d\n", va);
} }
