/*
 * ArrayEX3.c
 *
 *  Created on: Jan 18, 2022
 *      Author: LENOVO
 */

#include<stdio.h>

int main()
{
	int r ,c ;
	printf("Enter rows add column of matrix:");
	fflush(stdout);fflush(stdin);
	scanf("%d%d",&r,&c);
	int arr[10][10];
   //int ter[c][r];
	int i ,j ;
	printf("\nEnter elements of matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter element a%d%d:",i+1,j+1);
			fflush(stdout);fflush(stdin);
			scanf("%d",&arr[i][j]);
			fflush(stdout);fflush(stdin);
		}
	}
	printf("\nEntered  matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	printf("\ntranspose of matrix:\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d\t",arr[j][i]);
		}
		printf("\n");
	}
}

