#include <stdio.h>

int main()
{
	float dolar,cotaçao,real;
	printf("Digite o valor em dolar: ");
	scanf("%f",&dolar);
	printf("Digite o valor da cotaçao: ");
	scanf("%f",&cotaçao);
	
	real=dolar*cotaçao;
	
	printf("O valor em real é R$%.2f\n",real);
	
	return 0;
}

