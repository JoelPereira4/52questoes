#include <stdio.h>
#define MAX 5
int main()
{
    int num[MAX];
    int positivos=0;
    int negativos=0;
    int zero =0;
    for(int i =0; i<MAX; i++){
    printf("DIGITE SEUS NUMEROS:");
    scanf("%d", &num[i]);
if(num[i]<0){
    negativos ++;
} if(num[i]>0){
    positivos ++;
} if(num[i]=0){
    zero++;
}
        
    }
    printf("ZEROS;%d\n", zero);
    printf("NEGATIVOS;%d\n", negativos);
    printf("POSITIVOS;%d\n", positivos);

}
