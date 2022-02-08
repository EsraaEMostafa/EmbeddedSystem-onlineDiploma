/*
 * EX1.c
 *
 *  Created on: Feb 8, 2022
 *      Author: Esraa Ebrahim
 */
/*prime numbers between two intervals by making user-defined function */
#include <stdio.h>
void prime_numbers(int x ,int y);
int main ()
{
	int num1 ,num2 ;
	printf("Enter two numbers (intervals) : ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&num1 ,&num2);
	printf ("prime numbers between %d and %d are: ",num1 ,num2);
	prime_numbers(num1,num2);
    return 0 ;
}
void prime_numbers(int x ,int y)
{
	int i = x+1;
	int j;
	while(i < y)
	{
		int count = 0 ;
		for (j = 2 ; j <= i/2 ;j++)
		{
			if (i%j == 0)
			{
				count++ ;
				break ;
			}
		}
		if (count == 0)
		{
			printf("%d ",i);
		}
		i++ ;
	}
}
