/*
 * EX2.c
 *
 *  Created on: Jan 15, 2022
 *      Author: LENOVO
 */

#include<stdio.h>

int main()
{
	char c ;
	printf("Enter an alphabet : ");
	fflush(stdout); fflush(stdin);
	scanf("%c",&c);
	if(c== 'a'||c== 'u'||c== 'e'||c== 'o'||c== 'i'||c== 'A' ||c== 'E' ||c== 'U' ||c== 'O' ||c== 'I')
	{
		printf("%c is vowel",c);
	}
	else
	{
		printf("%c is constant",c);
	}
}
