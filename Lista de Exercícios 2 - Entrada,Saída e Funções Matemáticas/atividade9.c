/*9) Faça um programa que leia um valor inteiro positivo de quatro algarismos, armazene-o numa
variável inteira e determine a soma dos dígitos que formam o valor. Exemplo: o valor 3970 tem
soma dos dígitos igual a 19, ou seja, 3+9+7+0 = 19. Obs1: o valor de quatro algarismos que o
usuário digitar deve ser armazenado em apenas 1 variável, e não em 4 variáveis. Obs2: para
fazer a soma dos dígitos, deve-se separar o número lido em 4 dígitos (milhar, centena, dezena e
unidade). Obs3: use combinações da divisão inteira e da operação do resto da divisão.*/

#include <stdio.h>

int main(){

    int num,unidade,dezena,centena,milhar,soma = 0;
    printf("Informe um valor com 4 algarismos: ");
    scanf("%d",&num);

    unidade=num%10; 
    soma+=unidade;      
    num/=10;          

    dezena=num%10;  
    soma+=dezena;      
    num/=10;         

    centena=num%10; 
    soma+=centena;      
    num/=10;          

    milhar=num%10;  
    soma+=milhar;       

    printf("A soma dos dígitos é: %d\n", soma);

    return 0;
}