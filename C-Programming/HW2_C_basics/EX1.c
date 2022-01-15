/*
 * EX1.c
 *
 *  Created on: Jan 15, 2022
 *      Author: LENOVO
 */

#include <stdio.h>

int main ()
{
	int n ;
	printf("Enter an integer you want to check : ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&n);
	if (n%2 == 0)
	{
		printf("%d is even",n);
	}
	else
	{
		printf("%d is odd",n);
	}
}
