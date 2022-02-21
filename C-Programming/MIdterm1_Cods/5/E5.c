/*********************************************************************************************
 Name        : midterm1_code 5
 Author      : Esraa  Ebrahim
 Description :
 C function to count number of ones in binary number: input:5 - output: 2
 *********************************************************************************************/

#include<stdio.h>
int count_ones(int n)
{
	int count = 0;
	int mask = 1;
	int i ;
	for(i=0 ;i<32;i++)
	{
		if((n>>i)&mask)
			count++;
	}
	return count ;
}
int main()
{
	int num = 5 ;
	int res = count_ones(num);
	printf("%d",res);
	return 0;
}
