/*
 * EX4.c
 *
 *  Created on: Jan 15, 2022
 *      Author: LENOVO
 */

#include<stdio.h>

int main()
{
	float n ;
	printf ("Enter a number : ");
	fflush(stdout); fflush(stdin);
	scanf("%f",&n);
	if( n > 0)
	{
		printf("%.2f is positive",n);
	}
	else if (n < 0)
	{
		printf("%.2f is negative",n);
	}
	else
	{
		printf("you entered zero");
	}
}
