/*
 * EX3.c
 *
 *  Created on: Feb 8, 2022
 *      Author: Esraa Ebrahim
 */
/*C program to reverse a sentence using recursion */

#include <stdio.h>
#include <string.h>
void Reverse (char st[] , int s);
int main ()
{
	char str [20];
	printf("Enter a sentence: ");
	fflush(stdin);fflush(stdout);
	gets(str);
	int size = strlen(str);
	Reverse (str , size);
	return 0 ;
}
void Reverse (char st[], int s)
{
	if(s >= 0)
	{
		printf("%c",st[s]);
		Reverse (st, --s);
	}

}
