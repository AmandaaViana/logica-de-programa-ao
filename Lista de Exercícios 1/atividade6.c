#include <stdio.h>

int main(int argc, char **argv)
{
	float arquivo,velocidade,tempo;
	printf("Qual o tamanho do arquivo (em bits): ");
	scanf("%f",&arquivo);
	printf("Qual a velocidade da conexao (bits por segundos): ");
	scanf("%f",&velocidade);
	
	tempo=arquivo/velocidade;
	
	printf("O tempo necessario é de: %.2f\n",tempo);
	
	return 0;
}

