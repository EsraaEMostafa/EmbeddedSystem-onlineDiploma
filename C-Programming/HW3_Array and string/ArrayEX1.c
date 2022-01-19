/*
 * EX1.c
 *
 *  Created on: Jan 18, 2022
 *      Author: LENOVO
 */
#include<stdio.h>
int main()
{
	float a [2][2] ;
	float b [2][2] ;
	int i , j ;
	printf("Enter the elements of 1st matrix \n");
	for (i = 0 ;i <2 ; i++)
	{
		for (j = 0 ;j <2 ; j++)
		{
			printf("Enter a%d%d :",i+1,j+1);
			fflush(stdout);fflush(stdin);
			scanf("%f",&a[i][j]);
			fflush(stdout);fflush(stdin);
		}
	}
	printf("Enter the elements of 2st matrix \n");
	for (i = 0 ;i <2 ; i++)
	{
		for (j = 0 ;j <2 ; j++)
		{
			printf("Enter b%d%d :",i+1,j+1);
			fflush(stdout);fflush(stdin);
			scanf("%f",&b[i][j]);
			fflush(stdout);fflush(stdin);
		}
	}
	printf("\nSum of matrix : \n");
	printf("%.1f\t%.1f\n",a[0][0]+b[0][0],a[0][1]+b[0][1]);
	printf("%.1f\t%.1f\n",a[1][0]+b[1][0],a[1][1]+b[1][1]);

}
