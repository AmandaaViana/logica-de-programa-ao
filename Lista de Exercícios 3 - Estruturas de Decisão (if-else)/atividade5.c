/*5) Faça um programa para ler um número inteiro e verificar se o número for maior que 10
e menor que 100, imprimir a mensagem: “Número está entre 10 e 100 – intervalo
permitido”*/

#include <stdio.h>
#include <math.h>

int main() {
    
    int num;
    printf("Informe um numero: ");
    scanf("%d",&num);

    if (num >=10 && num <= 100)
        printf("Número está entre 10 e 100 – intervalo permitido \n");
    else 
        printf("O numero nao esta no intervalo permitido\n");
    
    return 0;
}