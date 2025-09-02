/*3) Faça um programa para ler um valor inteiro, que é o tempo de duração em segundos de um
determinado evento em uma fábrica, e apresente-o expresso no formato horas:minutos:segundos.
Exemplos:
556s = 0:9:16
1s = 0:0:1
140153s = 38:55:53*/

#include <stdio.h>

int main(){

    int tempo,hora,minuto,segundo;
    printf("Informe o tempo de duraçao em segundos: ");
    scanf("%d",&tempo);
    
    hora=tempo/3600;
    minuto=(tempo%3600)/60;
    segundo=tempo%60;
    
    printf("%ds = %d:%d:%d\n",tempo,hora,minuto,segundo);
    
    return 0;
}