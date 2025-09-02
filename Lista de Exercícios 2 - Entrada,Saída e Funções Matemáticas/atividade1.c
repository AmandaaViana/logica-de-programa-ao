/*Faça um programa para calcular a média aritmética (valor real) de três notas (valor inteiro).
Utilizar o operador cast*/

#include <stdio.h>

int main(){

    int valor1,valor2,valor3;
    float media;
    printf("Informe a primeira nota: ");
    scanf("%d",&valor1);
    printf("Informe a segunda nota: ");
    scanf("%d",&valor2);
    printf("Informe a terceira nota: ");
    scanf("%d",&valor3);

    media=(float)(valor1+valor2+valor3)/3;

    printf("A media é:%.1f\n",media);

    return 0;
}