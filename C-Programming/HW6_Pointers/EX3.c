/*********************************************************************************************
 Name        : Ex3
 Author      : Esraa Ebrahim
 Description : Pointers - Ex3
 Write a program in C to print a string in reverse using a pointer .
 *********************************************************************************************/

#include<stdio.h>
#include<string.h>
int main()
{
	char str[20] ;
	char rev[20] ;
	int i = 0 ;
	char *pstr = str ;
	char *prev = rev ;
	printf("Input a string : ");
	fflush(stdin);fflush(stdout);
	gets(str) ;
	while (*pstr != 0)
	{
		pstr++ ;
		i++ ;
	}
	while(i>=0)
	{
		pstr-- ; //pstr is point to the null
		*prev = *pstr ;
		prev++ ;
		i-- ;
	}
	*prev = 0;
	printf("Reverse of the string is : %s",rev);
	return 0;
}
