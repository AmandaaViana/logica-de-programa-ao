/*
 * atividade7.c
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
	float celsius,fahrenheit,kelvin;
	printf("Informe o valor da temperatura em Celsius: ");
	scanf("%f",&celsius);
	
	kelvin=celsius+273;
	fahrenheit=1.8*(kelvin-273)+32;
	
	printf("A temperatura em celcius é: %.1f\n",celsius);
	printf("A temperatura em kelvin é: %.1f\n",kelvin);
	printf("A temperatura em fahrenheit é: %.1f\n",fahrenheit);
	
	return 0;
}

