#include <stdio.h>
#define MAX 5
int main() {
    int lista[MAX];
    for(int i =0; i< MAX; i++){
    printf("DIGITE SUA NOTA:\n");
    scanf("%d", &lista[i]);
    }
    for(int i =0; i< MAX; i++){
    printf("SEUS NUMEROS SÃO:\n");
    printf("%d\n", lista[i]);
    }}
