/*********************************************************************************************
 Name        : midterm1_code 4
 Author      : Esraa  Ebrahim
 Description :
 C function to reverse digits in number : input:2457 - output:7542
 *********************************************************************************************/

#include<stdio.h>
int reverse_digits(int n)
{
	int new = 0 , d ;
	while(n != 0)
	{
		d = n%10 ;
		new = (new*10) + d ;
		n/= 10 ;
	}
	return new ;
}
int main()
{
	int num = 2457 ;
	int new_num = reverse_digits(num);
	printf ("%d", new_num);
	return 0;
}
