/*
 * EX6.c
 *
 *  Created on: Jan 13, 2022
 *      Author: LENOVO
 */

#include <stdio.h>

int main()
{
	float a ,b ;
	printf("Enter value of a: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&b);
	float temp = a;
	a= b ;
	b= temp ;
	printf("\nAfter swapping, value of a = %.2f\n",a);
	printf("After swapping, value of b = %.2f",b);
}
