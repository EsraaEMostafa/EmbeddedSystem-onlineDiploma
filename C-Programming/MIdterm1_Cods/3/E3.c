/*********************************************************************************************
 Name        : midterm1_code 3
 Author      : Esraa  Ebrahim
 Description :
 c function to print all prime numbers between two numbers.
 input:n1=1,n2=20 ->output:1 2 3 5 7 11 13 17 19
 *********************************************************************************************/

#include<stdio.h>
void print_prime(int n1 ,int n2)
{
	int i , j ;
	for(i = n1;i<=n2 ;i++)
	{
		int count = 0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j == 0)
			{
				count++ ;
			}
		}
		if(count == 0)
		{
			printf("%d ",i);
		}
	}
}
int main()
{
	int n1 = 1, n2 = 20 ;
	print_prime(n1 ,n2);
	return 0;
}
