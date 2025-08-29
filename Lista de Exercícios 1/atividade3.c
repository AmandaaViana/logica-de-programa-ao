#include <stdio.h>

int main(int argc, char **argv)
{
	float tvendas,comissao;
	printf("Digite o valor total de vendas:R$ ");
	scanf("%f",&tvendas);
	printf("Digite a taxa de comissao: ");
	scanf("%f",&comissao);
	
	comissao=tvendas*(10/100);
	
	printf("A comissao será de:R$ %.2f \n",comissao);
	
	return 0;
}

