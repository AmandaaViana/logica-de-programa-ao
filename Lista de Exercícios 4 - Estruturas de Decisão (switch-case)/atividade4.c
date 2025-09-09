/*4) Faça um programa para ler o mês e determinar o número de dias. Considere que se o
mês de entrada for 2, o programa deve pedir o ano para determinar se ele é bissexto. */

#include <stdio.h>

int main(){
	
	int mes,ano,dias;
	printf("Informe o numero do mes (1-12): ");
	scanf("%d",&mes);
	
	switch (mes){
	 case 1:
	 case 3:
	 case 5:
	 case 7:
	 case 8:
	 case 10:
	 case 12:
		dias=31;
	 break;
	 case 4:
	 case 6:
	 case 9:
	 case 11:
		dias=30;
	case 2:
		printf("Infome o ano: ");
		scanf("%d",&ano);
		
		 if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
                dias=29;
            } else {
                dias=28; 
            }
            break;
	 default:
		printf ("\nMes invalido.\n");
 }
	printf("O mês %d que foi informado tem %d dias.\n", mes, dias);
	
	return 0;
}

