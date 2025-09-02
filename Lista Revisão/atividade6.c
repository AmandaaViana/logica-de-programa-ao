/*
 * atividade6.c
 * 
 * Copyright 2025 Laboratório <lab@lab>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	float valor, desconto,acrescimo;
	printf("Valor da compra: ");
	scanf("%f",&valor);
	
	desconto=valor-(10/100);
	acrescimo=valor+(5/100);
	
	printf("O valor da compra com desconto foi:R$ %.2f\n",desconto);
	printf("O valor da compra com o acrescimo foi:R$ %.2f\n",acrescimo);
	
	return 0;
}

