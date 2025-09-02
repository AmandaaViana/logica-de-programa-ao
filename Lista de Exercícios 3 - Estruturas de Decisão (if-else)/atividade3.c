/*3) Faça um programa para ler o estado civil de uma pessoa no formato caractere, apenas
a inicial (S / C / D / V) e mostrar uma mensagem dizendo se é solteiro, casado, divorciado
ou viúvo.*/

#include <stdio.h>

int main() {
    
    char estado;
    printf("Informe no formato caractere seu estado civil: ");
    scanf("%c",&estado);
    
    if (estado == 'S' || estado == 's')
            printf("É solteiro");
    else 
        if (estado == 'C' || estado == 'c')
            printf("É casado");
    else 
        if (estado == 'D' || estado == 'd')
            printf("É divorciado");
    else
            printf("É viuvo");
     
    return 0;
}