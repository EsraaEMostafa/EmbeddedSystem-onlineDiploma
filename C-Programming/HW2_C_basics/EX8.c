/*
 * EX8.c
 *
 *  Created on: Jan 15, 2022
 *      Author: LENOVO
 */
#include<stdio.h>

int main()
{
	float n , x  ;
	char c ;
	printf ("Enter operator either + or - or * or divide : ");
	fflush(stdout); fflush(stdin);
	scanf("%c",&c);
	printf("Enter two operands : ");
	fflush(stdout); fflush(stdin);
	scanf("%f%f",&n ,&x);
	switch (c)
	{
	case '+':
		printf("%.1f + %.1f = %.1f",n,x,n+x);
		break ;
	case '-':
		printf("%.1f - %.1f = %.1f",n,x,n-x);
		break ;
	case '*':
		printf("%.1f * %.1f = %.1f",n,x,n*x);
		break ;
	case '/':
		printf("%.1f / %.1f = %.1f",n,x,n/x);
		break ;
	}
}

