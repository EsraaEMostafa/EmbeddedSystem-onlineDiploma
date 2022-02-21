/*********************************************************************************************
 Name        : midterm1_code 1
 Author      : Esraa  Ebrahim
 Description :
 C function to take a number and sum all digits.
 *********************************************************************************************/

#include<stdio.h>
int sum_digits(int n)
{
	int sum = 0 , d ;
	while(n != 0)
	{
		d = n%10 ;
		sum += d;
		n/= 10 ;
	}
	return sum ;
}
int main()
{
	int num = 1234 ;
	int sum = sum_digits(num);
	printf ("the sum of all digits = %d",sum);
	return 0;
}
