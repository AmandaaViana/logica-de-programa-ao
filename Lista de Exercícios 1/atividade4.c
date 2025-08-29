#include <stdio.h>

int main(int argc, char **argv)
{
	float media,distancia,combustivel;
	
	printf("Digite a distancia percorrida (em km): ");
	scanf("%f",&distancia);
	printf("Digite o total de combustivel gasto (em litros): ");
	scanf("%f",&combustivel);
	
	media=distancia/combustivel;
	
	printf("A media de combustivel foi de:%.2fkm/l \n", media);
	
	return 0;
}

