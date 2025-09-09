/*3) Faça um programa para ler um número de 1 a 12 e informar o trimestre
correspondente, sendo Jan/Fev/Mar o 1º. Trimestre. Se for um número incorreto, mostrar
uma mensagem de erro. Utilize a opção de “passar caindo” pelos case's para otimizar a
estrutura.*/


#include <stdio.h>

int main(){
	
	int num;
	printf("Informe um numero de 1 a 12: ");
	scanf("%d",&num);
	
	switch (num){
	 case 1:
	 case 2:
	 case 3:
		printf ("\n1° Trimestre.\n");
	 break;
	 case 4:
	 case 5:
	 case 6:
		printf ("\n2° Trimestre.\n");
	 break;
	 case 7:
	 case 8:
	 case 9:
		printf ("\n3° Trimestre.\n");
	 break;
	 case 10:
	 case 11:
	 case 12:
		printf ("\n4° Trimestre.\n");
	 break;
	 default:
		printf ("\nO numero informado é invalido.\n");
 }
	return 0;
}

