/*
 * StringEX3.c
 *
 *  Created on: Jan 18, 2022
 *      Author: LENOVO
 */


#include<stdio.h>
#include<string.h>
int main()
{
	char arr [30];
	int i = 0;
	char temp ;
	printf("Enter the string  : ");
	fflush(stdout);fflush(stdin);
	gets(arr);
	int n = strlen(arr);
	for(i=0;i<n/2;i++)
	{
		temp = arr[i] ;
		arr[i]=arr[n-i-1];
		arr[n-i-1] = temp ;
	}
	printf("Reverse string is : %s",arr);
}
