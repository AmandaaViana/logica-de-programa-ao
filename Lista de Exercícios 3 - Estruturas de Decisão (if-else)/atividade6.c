/*6) Faça um programa para ler o salário atual e mostrar o salário reajustado de acordo
com a tabela abaixo:*/

#include <stdio.h>
#include <math.h>

int main() {
    
    float salario,aumento,reajuste;
    printf("Imforme o salário atual: R$ ");
    scanf("%f",&salario);

    if (salario <= 990.00) {
        aumento = 0.20; 
    } else if (salario <= 1480.00) {
        aumento = 0.10; 
    } else if (salario <= 2000.00) {
        aumento = 0.05; 
    } else {
        aumento = 0.00; 
    }

    reajuste = salario + (salario * aumento);

    printf("Salário reajustado: R$ %.2f\n",reajuste);

    return 0;
}