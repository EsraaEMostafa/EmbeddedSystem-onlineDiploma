/*
 * EX6.c
 *
 *  Created on: Jan 13, 2022
 *      Author: LENOVO
 */

#include <stdio.h>

int main()
{
	int a ,b ;
	printf("Enter value of a: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&a);
	printf("Enter value of b: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&b);
	a = a^b ;
	b = a^b ;
	a = a^b;
	printf("\nAfter swapping, value of a = %d\n",a);
	printf("After swapping, value of b = %d",b);
}
