/*4) Faça um programa para calcular a raiz quadrada de um número real (utilizando a função sqrt)*/

#include <stdio.h>
#include <math.h>

int main(){

    float num, raiz;
    printf("Informe um numero: ");
    scanf("%f",&num);

    raiz = sqrt(num);

    printf(" A raiz quadrada do numero informado é:%.0f\n", raiz);

    return 0;
}