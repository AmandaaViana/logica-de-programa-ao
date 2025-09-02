/*7) Faça um programa onde sejam dados quatro valores reais, a, b, c e d determine:
A média harmônica (MH);*/

#include <stdio.h>
#include <math.h>

int main(){

    float a,b,c,d,media;
    printf("Informe o valor de A: ");
    scanf("%f",&a);
    printf("Informe o valor de B: ");
    scanf("%f",&b);
    printf("Informe o valor de C: ");
    scanf("%f",&c);
    printf("Informe o valor de D: ");
    scanf("%f",&d);

    media=(4/((1/a)+(1/b)+(1/c)+(1/d)));

    printf("A media harmonica é %2.f\n",media);

    return 0;
}
