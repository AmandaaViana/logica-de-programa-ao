/*2) Faça um programa para ler um número de 1 a 7 e informar o dia da semana
correspondente, sendo domingo o dia de número 1. Se o número não corresponder a um
dia da semana, é mostrada uma mensagem de erro.*/

#include <stdio.h>

int main(){
	
	int num;
	printf("Informe um numero de 1 a 7: ");
	scanf("%d",&num);
	
	switch (num){
	 case 1:
		printf ("\nDia da semana: Domingo.\n");
	 break;
	 case 2:
		printf ("\nDia da semana: Segunda-feira.\n");
	 break;
	 case 3:
		printf ("\nDia da semana: Terça-feira.\n");
	 break;
	 case 4:
		printf ("\nDia da semana: Quarta-feira.\n");
	 break;
	 case 5:
		printf ("\nDia da semana: Quinta-feira.\n");
	 break;
	 case 6:
		printf ("\nDia da semana: Sexta-feira.\n");
	 break;
	 case 7:
		printf ("\nDia da semana: Sabado.\n");
	 break;
	 default:
		printf ("\nO numero informado é invalido.\n");
 }
	return 0;
}

