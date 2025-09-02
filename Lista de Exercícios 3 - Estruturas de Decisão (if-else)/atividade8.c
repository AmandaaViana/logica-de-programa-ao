/*8) Faça um programa para ler o gênero (apenas a inicial), o peso (em quilos) e a altura
(em metros) de uma pessoa. Calcular e mostrar seu índice de massa corpórea IMC =
peso / (altura*altura).*/

#include <stdio.h>
#include <math.h>

int main() {
    
    char genero;
    float peso, altura, imc;
    printf("Informe seu gênero (M/F): ");
    scanf("%c",&genero);
    printf("Informe seu peso (em kg): ");
    scanf("%f",&peso);
    printf("Informe sua altura (em metros): ");
    scanf("%f",&altura);
    
    imc = peso / (altura * altura);
    
    printf("Seu IMC é: %.2f\n",imc);
 
   if (imc < 18.5) {
        printf("Classificação: Abaixo do peso\n");
    } else if (imc >= 18.5 && imc < 24.9) {
        printf("Classificação: Normal\n");
    } else if (imc >= 25.0 && imc < 29.9) {
        printf("Classificação: Obesidade leve\n");
    } else if (imc >= 30.0 && imc < 39.9) {
        printf("Classificação: Obesidade moderada\n");
    } else {
        printf("Classificação: Obesidade mórbida\n");
    }
    
    return 0;
}