/*8) Faça um programa onde sejam dados quatro valores reais, a, b, c e d determine:
A média quadrática (MQ).*/

#include <stdio.h>
#include <math.h>

int main() {
    
    double a,b,c,d,media;
    printf("Informe o valor de A: ");
    scanf("%lf",&a);
    printf("Informe o valor de B: ");
    scanf("%lf",&b);
    printf("Informe o valor de C: ");
    scanf("%lf",&c);
    printf("Informe o valor de D: ");
    scanf("%lf",&d);

    media=sqrt((a*a+b*b+c*c+d*d)/4);
    
    printf("A media quadrática é: %.2lf\n", media);

    return 0;
}