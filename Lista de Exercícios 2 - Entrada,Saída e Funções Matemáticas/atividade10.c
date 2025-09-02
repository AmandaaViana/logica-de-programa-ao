/*10) Faça um programa para ler dois valores inteiros e armazenar nas variáveis v1 e v2, e efetuar
as trocas dos valores de forma que a variável v1 passe a possuir o valor da variável v2 e a
variável v2 passe a possuir o valor da variável v1. Apresentar os valores iniciais e os valores
finais trocados. Não faça apenas a escrita invertida das variáveis, é preciso inverter os valores nas
variáveis!*/

#include <stdio.h>

int main (){

    int valor1,valor2,variavel;
    printf("Informe o primeiro valor: ");
    scanf("%d",&valor1);
    printf("Informe o segundo valor: ");
    scanf("%d",&valor2);

    printf("Valores iniciais\n Primeiro valor = %d\n Segundo valor = %d\n",valor1,valor2);

    variavel=valor1; 
    valor1=valor2;   
    valor2=variavel; 

    printf("Valores apos a troca\n Primeiro valor = %d\n Segundo valor = %d\n",valor1 ,valor2);

    return 0;

}