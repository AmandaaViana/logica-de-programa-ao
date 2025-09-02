/*6) Faça um programa para ler um número real e utilizando as funções de arredondamento,
apresente os valores com o arredondamento para baixo (floor) e o arredondamento para cima
(ceil).*/

#include <stdio.h>
#include <math.h>

int main(){

    float num,cima, baixo;
    printf("Informe um numero: ");
    scanf("%f",&num);
    
    cima=ceil(num);
    baixo=floor(num);

    printf("O numero %f arredondado para cima é %.2f\n E aredondado para baixo é:%.2f\n",num,cima,baixo);

    return 0;
}