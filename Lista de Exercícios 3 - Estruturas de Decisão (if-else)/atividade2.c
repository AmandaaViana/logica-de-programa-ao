/*2) Faça um programa para ler um número e imprimir se: 'é múltiplo de 3' ou 'não é múltiplo
de 3'.*/

#include <stdio.h>

int main() {
    
    int valor,multiplo;
    printf("Informe um numero: ");
    scanf("%d",&valor);
    
    multiplo=valor%3;
    
    if (multiplo==0)
        printf("Este numero é múltiplo de 3");
    else 
        printf("Este numero nao é múltiplo de 3");
    return 0;
}