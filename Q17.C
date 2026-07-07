#include <stdio.h>
#include <math.h>
#define MAX 3
int main() {
   float lado1;
   float lado2;
   float h;
   printf("DIGITE O PRIMEIRO CATETO\n");
   scanf("%f", &lado1);
   printf("DIGITE O SEGUNDO CATETO\n");
   scanf("%f", &lado2);
   h = sqrt((pow(lado1,2))+(pow(lado2,2)));
   printf("A HIPOTENUSA É:%.2f", h);
    
    }
