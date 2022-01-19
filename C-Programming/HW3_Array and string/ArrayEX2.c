/*
 * ArrayEX2.c
 *
 *  Created on: Jan 18, 2022
 *      Author: LENOVO
 */

#include<stdio.h>
int main()
{
	int n ;
	int i  ;
	float sum =0 ;
	printf("Enter the numbers of data: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&n);
	float arr[30];
	for(i=0 ; i<n ; i++)
	{
		printf("%d. Enter number : ",i+1);
		fflush(stdout);fflush(stdin);
		scanf("%f",&arr[i]);
		sum += arr[i];
	}
	printf("Average = %.2f",sum/n);

}

