/*5) Faça um programa que calcule o quadrado e o cubo (utilizando a função pow) de um número
que deve ser solicitado ao usuário. Use tabulações (\t) para imprimir uma tabela dos valores no
formato abaixo:
número quadrado cubo
4        16      64*/

#include <stdio.h>
#include <math.h>

int main(){

    double num;
    printf("Digite um número: ");
    scanf("%lf",&num);

    double quadrado=pow(num,2);
    double cubo=pow(num,3);

    printf("número\tquadrado\tcubo\n");
    printf("%.2lf\t%.2lf\t\t%.2lf\n",num,quadrado,cubo);

    return 0;

}