/*
 * ArrayEX5.c
 *
 *  Created on: Jan 18, 2022
 *      Author: LENOVO
 */
#include<stdio.h>

int main()
{
	int arr[30];
	int n ,i,num;
	printf("Enter no of elements : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nEnter element to be searched : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(arr[i] == num)
			break ;
	}
	if(i<n)
	{
		printf("\nNumber found at the location =  %d",i+1);
	}
	else
	{
		printf("\nNumber not found" );
	}
}


