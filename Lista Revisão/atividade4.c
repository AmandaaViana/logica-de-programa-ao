/*
 * atividade4.c
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
	float area,altura,base;
	printf("informe o valor da altura: ");
	scanf("%f",&altura);
	
	printf("informe o valor da base: ");
	scanf("%f",&base);
	
	area=(altura*base)/2;
	
	printf("A area do triangulo é: %.2f\n",area);
	return 0;
}

