/*
 * EX7.c
 *
 *  Created on: Jan 15, 2022
 *      Author: LENOVO
 */

#include<stdio.h>

int main()
{
	int n , i ,fact=1 ;
	printf ("Enter an integer : ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&n);
	if (n>0)
	{
		for(i = 1 ;i<=n ;i++)
			fact *= i;
		printf("Factorial = %d",fact);
	}
	else if (n == 0)
	{
		fact = 1;
		printf("Factorial = %d",fact);
	}
	else
	{
		printf("Error!!!factorial of negative number doesn't exist");
	}
}
