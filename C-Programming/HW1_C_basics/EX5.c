/*
 * EX5.c
 *
 *  Created on: Jan 13, 2022
 *      Author: LENOVO
 */


#include <stdio.h>

int main()
{
	char c ;
	printf("Enter a character: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);
	printf("ASCII value of %c = %d",c,c);
}
