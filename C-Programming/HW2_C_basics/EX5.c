/*
 * EX5.c
 *
 *  Created on: Jan 15, 2022
 *      Author: LENOVO
 */

#include<stdio.h>

int main()
{
	char c ;
	printf ("Enter a character : ");
	fflush(stdout); fflush(stdin);
	scanf("%c",&c);
	if((c >= 'a'&& c<='z') ||(c >= 'A'&& c<='Z'))
	{
		printf("%c is an alphabet",c);
	}
	else
	{
		printf("%c is not an alphabet",c);
	}
}
