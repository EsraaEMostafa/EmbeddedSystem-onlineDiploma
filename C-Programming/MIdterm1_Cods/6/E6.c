/*********************************************************************************************
 Name        : midterm1_code 6
 Author      : Esraa  Ebrahim
 Description :
 c function to return unique number in array with one loop :input:int a[7]={4,2,5,2,5,7,4}; output:7.
 *********************************************************************************************/

#include<stdio.h>
int unique_number(int *arr ,int s)
{
	int i , n =0;
	for (i = 0 ;i<s;i++)
	{
		n ^= arr[i];
	}
	return n;
}
int main()
{
	int a[7]={4,2,5,2,5,7,4};
	printf("%d",unique_number(a,7));
	return 0;
}
