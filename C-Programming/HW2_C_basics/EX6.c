/*
 * EX6.c
 *
 *  Created on: Jan 15, 2022
 *      Author: LENOVO
 */


#include<stdio.h>

int main()
{
	int n , i ,sum=0 ;
	printf ("Enter an integer : ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&n);
	for(i=1 ;i<=n;i++)
	{
		sum+= i ;
	}
	printf ("sum = %d",sum);
}
