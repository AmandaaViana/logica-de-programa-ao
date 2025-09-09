/*1) Faça um programa para ler a categoria de uma carteira de motorista e mostrar qual é o
tipo de veículo permitido para dirigir.
Categoria A: Moto
Categoria B: Carro
Categoria C: Caminhão
Categoria D: Ônibus
Categoria E: Carreta*/

#include <stdio.h>

int main()
{
	char resp;
	printf ("Infome a categoria da sua CNH: ");
	scanf ("%c",&resp);
 
    switch (resp){
	 case 'A':
	 case 'a':
		printf ("\nCategoria A: Moto.\n");
	 break;
	 case 'B':
	 case 'b':
		printf ("\nCategoria B: Carro.\n");
	 break;
	 case 'C':
	 case 'c':
		printf ("\nCategoria C: Caminhão.\n");
	 break;
	 case 'D':
	 case 'd':
		printf ("\nCategoria D: Ônibus.\n");
	 break;
	 case 'E':
	 case 'e':
		printf ("\nCategoria E: Carreta.\n");
	 break;
	 default:
		printf ("\nA categoria informada é invalida.\n");
 }
	return 0;
}

