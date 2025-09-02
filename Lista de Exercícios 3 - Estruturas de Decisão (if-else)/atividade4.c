/*4) Faça um programa para ler um número real e mostrar a raiz quadrada do número caso
ele seja positivo e o número elevado ao cubo caso ele seja negativo.*/

#include <stdio.h>
#include <math.h>

int main() {
    
    float num,raiz,cubo;
    printf("Informe um numero: ");
    scanf("%f",&num);
    
   if (num>0){
        raiz=sqrt(num);
        printf("A raiz quadrada é %.2f",raiz);
   }
    else if (num<0){
        cubo=pow(num,3);
            printf("O numero é %.2f",cubo);
        }
        else {
            printf("Este valor é nulo");
        }  
    return 0;
}
