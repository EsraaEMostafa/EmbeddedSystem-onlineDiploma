/*
 * StringEX1.c
 *
 *  Created on: Jan 18, 2022
 *      Author: LENOVO
 */
#include<stdio.h>
#include<string.h>
int main()
{
	char arr [30];
	char c ;
	int i , freq =0;
	printf("Enter a string : ");
	fflush(stdout);fflush(stdin);
	gets(arr);
	printf("\nEnter a character to find frequency : ");
	fflush(stdout);fflush(stdin);
	scanf("%c",&c);
	for(i=0;i<strlen(arr);i++)
	{
		if(arr[i] == c)
			freq ++ ;
	}
	printf("\nfrequency of %c = %d",c,freq);
}


