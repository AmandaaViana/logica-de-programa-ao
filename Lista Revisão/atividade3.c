/*
 * atividade3.c
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
	float num1,num2,num3,num4,soma,media;
	printf("Informe o valor 1: ");
	scanf("%f",&num1);
	
	printf("Informe o valor 2: ");
	scanf("%f",&num2);
	
	printf("Informe o valor 3: ");
	scanf("%f",&num3);
	
	printf("Informe o valor 4: ");
	scanf("%f",&num4);
	
	soma=num1+num2+num3+num4;
	media=soma/4;
	
	printf("A media é: %.2f\n",media);
	
	return 0;
}

