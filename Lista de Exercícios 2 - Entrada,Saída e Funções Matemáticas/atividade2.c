/*2) Uma loja está vendendo seus produtos em 5 (cinco) prestações sem juros. Faça um programa
que receba um valor de uma compra e mostre o valor das prestações no formato abaixo:
Compra parcelada
5 x 100,00 = 500,00*/

#include <stdio.h>

int main(){

    int valor;
    float prestaçao;
    printf("Informe o valor da compra: ");
    scanf("%d",&valor);

    prestaçao=(float)valor/5;

    printf("Compra parcelada \n 5 x %d = %2.f\n",valor, prestaçao);

    return 0;
}
