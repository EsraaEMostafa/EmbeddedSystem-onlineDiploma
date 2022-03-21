/*********************************************************************************************
 Name        : Ex2
 Author      : Esraa Ebrahim
 Description : Pointers - Ex2
 Write a program in C to print all the alphabets using a pointer .
 *********************************************************************************************/

#include<stdio.h>

int main()
{
	char alpha [26] ;
	char* ptr  = alpha ;
	int i ;
	for(i=0;i<26 ;i++)
	{
		ptr[i]='A'+i ;
	}
	printf("The Alphabets are :\n");
	for(i=0;i<26;i++)
	{
		printf("%c\t",*(ptr+i)) ;
	}
	return 0 ;
}

