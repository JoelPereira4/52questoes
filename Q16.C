#include <stdio.h>
#define MAX 3
int main() {
 float lista[MAX];
    float media;
    float soma;
    for(int i =0; i< MAX; i++){
    printf("DIGITE SUA IDADE:\n");
    scanf("%f", &lista[i]);
    soma += lista[i]; 
    media= soma/MAX;
    }
    printf("A MEDIA DAS IDADES É:%.2f", media);
}
