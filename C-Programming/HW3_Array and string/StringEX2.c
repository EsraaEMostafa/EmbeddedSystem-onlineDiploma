/*
 * StringEX2.c
 *
 *  Created on: Jan 18, 2022
 *      Author: LENOVO
 */

#include<stdio.h>

int main()
{
	char arr [30];
	int i = 0 ;
	printf("Enter a string : ");
	fflush(stdout);fflush(stdin);
	gets(arr);
	while(arr[i] != '\0')
	{
		i++ ;
	}
	printf("\nlength of string : %d",i);

}

