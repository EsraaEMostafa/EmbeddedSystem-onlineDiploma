/*
 * EX3.c
 *
 *  Created on: Jan 15, 2022
 *      Author: LENOVO
 */
#include<stdio.h>

int main()
{
	float x ,y,z ;
	printf("Enter three numbers : ");
	fflush(stdout); fflush(stdin);
	scanf("%f %f %f",&x,&y,&z);
	float max = x ;
	if(max < y)
	{
		max = y ;
	}
	else if(max < z)
	{
		max = z ;
	}
	printf("largest number = %.2f",max);
}
