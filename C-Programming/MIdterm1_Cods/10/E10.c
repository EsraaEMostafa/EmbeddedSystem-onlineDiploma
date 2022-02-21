/*********************************************************************************************
 Name        : midterm1_code 10
 Author      : Esraa  Ebrahim
 Description :
 c function to count the max number of ones between two zeros :input:110(0110 1110). output:3
 *********************************************************************************************/

#include<stdio.h>
int count_max(int n)
{
	int count = 0, max =0, i;
	int mask = 1;
	for(i =0 ;i<32 ;i++)
	{
		if((n>>i)&mask)
		{
			count++ ;
			if(count > max)
			{
				max =count ;
			}
		}
		else
		{
			count =0 ;
		}
	}
	return max ;
}
int main()
{
	int num =110 ;
	printf("the max number of ones = %d", count_max(num));
	return 0;
}
