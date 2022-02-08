/*
 * EX4.c
 *
 *  Created on: Feb 8, 2022
 *      Author: Esraa Ebrahim
 */
/*C program to calculate the power of a number  using recursion*/

#include <stdio.h>
int power(int x ,int y)
{
	int res ;
	if (y == 0)
		return 1 ;
	res = x * power (x , -- y);
	return res ;

}

int main ()
{
	int b , p ;
	printf ("Enter base number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&b);
	printf ("Enter power number(positive integer): ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&p);
	printf ("%d^%d = %d" ,b ,p ,power(b,p));
}
