#include <stdio.h>
#define MAX 10
int main()
{
    int num[MAX];
    int par=0;
    int impar=0;
    for(int i =0; i<MAX; i++){
    printf("DIGITE O NUMERO:\n\n" );
    scanf("%d", &num[i]);
    if(num[i]%2 ==0){
        par++;
    }else{
        impar++;
    }
    printf("Numeros PARES:%d\n\n", par);
    printf("Numeros IMPARES:%d\n\n", impar);
}
for (int i =0; i<MAX; i++){
printf("VOCE DIGITOU O NUMERO:%d\n\n", num[i]);
}

}
