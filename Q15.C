#include <stdio.h>
#define MAX 5
int main() {
 float lista[MAX];
    float media;
    for(int i =0; i< MAX; i++){
    printf("DIGITE SEU NUMERO:\n");
    scanf("%f", &lista[i]);
    // soma += lista[i]; pode ser usada no lugar da media feita aq, só dps de pesquisar q //eu vi q dava pra fazer
    // media= soma/MAX; evita o tanto de coisa pra escrever e fica mais limpo(colocar a //variável de soma em float dps)
    media=(lista[0]+lista[1]+lista[2]+lista[3]+lista[4])/5;
    }
    printf("A MEDIA DAS NOTAS É:%.2f", media);
}
