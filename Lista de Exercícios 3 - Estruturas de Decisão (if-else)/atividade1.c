/*1) Faça um programa para ler um número e identificar se ele é positivo, negativo ou nulo.*/

#include <stdio.h>

int main() {
    
    int valor;
    printf("Informe um numero: ");
    scanf("%d",&valor);
    
    if (valor>0)
        printf("Este numero é positivo");
    else {
        if (valor<0)
            printf("Este numero é negativo");
        else {
            printf("Este valor é nulo");
        }
    }    

    return 0;
}
