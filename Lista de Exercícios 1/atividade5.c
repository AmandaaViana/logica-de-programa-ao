#include <stdio.h>

int main(int argc, char **argv)
{
	float comp,larg,Pcarpete,total,area;
	printf("Medidas da sala (comprimento e largura): ");
	scanf("%f %f",&comp,&larg);
	printf("Qual o valor do carpete:R$ ");
	scanf("%f",&Pcarpete);
	
	area=comp*larg;
	total=area*Pcarpete;
	
	printf("O custo total é:R$%.2f\n",total);
	
	return 0;
}

