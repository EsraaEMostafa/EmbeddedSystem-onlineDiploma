/*
 * ArrayEX4.c
 *
 *  Created on: Jan 18, 2022
 *      Author: LENOVO
 */
#include<stdio.h>

int main()
{
	int arr[30];
	int n ,i,num,loc;
	printf("Enter no of elements : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to be inserted : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&num);
	printf("Enter the location : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&loc);
	for(i =n ;i >= loc;i--)
	{
		arr[i]=arr[i-1];
	}
	n++ ;
	arr[loc-1]=num;
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
