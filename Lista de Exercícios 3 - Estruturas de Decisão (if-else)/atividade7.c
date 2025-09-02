/*7) Faça um programa que leia três valores que representam os lados de um triângulo.
Primeiramente, verifique se os lados podem formar um triângulo (a soma de dois lados
não pode ser menor que o terceiro lado). Caso possa formar um triângulo, indique se este
é equilátero, escaleno ou isósceles.
a) Equilátero: 3 lados iguais
b) Isósceles: 2 lados iguais e 1 diferente
c) Escaleno: 3 lados diferentes*/

#include <stdio.h>
#include <math.h>

int main() {
    
    float a,b,c;
    printf("Imforme o comprimento do lado a: ");
    scanf("%f",&a);
    printf("Informe o comprimento do lado b: ");
    scanf("%f",&b);
    printf("Informe o comprimento do lado c: ");
    scanf("%f",&c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("Os lados podem formar um triangulo\n");

        if (a == b && b == c) {
            printf("Tipo: Equilatero");
        } else if (a == b || b == c || a == c) {
            printf("Tipo: Isosceles");
        } else {
            printf("Tipo: Escaleno");
        }
    } 
    return 0;
}