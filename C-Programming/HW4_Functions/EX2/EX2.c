/*
 * EX2.c
 *
 *  Created on: Feb 8, 2022
 *      Author:Esraa Ebrahim
 */
/*C program to calculate factorial of a number using recursion*/

#include <stdio.h>
int factorial (int n);
int main ()
{
	int num ;
	printf("Enter an positive number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	printf("Factorial of %d = %d",num , factorial (num) );
}
int factorial (int n)
{
	if(n == 1 || n == 0)
		return 1 ;
	int fact =  n * factorial(n-1) ;
	return fact ;
}
