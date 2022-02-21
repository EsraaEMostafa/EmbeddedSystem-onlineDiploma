/*********************************************************************************************
 Name        : midterm1_code 8
 Author      : Esraa  Ebrahim
 Description :
 c function to take an array and reverse its elements.a[5]={1,2,3,4,5}; output:5 4 3 2 1
 *********************************************************************************************/

#include<stdio.h>
void reverse(int*arr ,int s)
{
	int i ;
	for(i=0;i<=s/2 ;i++)
	{
		int temp = arr[i];
		arr[i]=arr[s-i-1];
		arr[s-i-1] = temp ;
	}
}
int main()
{
	int a[5]={1,2,3,4,5};
	int i ;
	reverse(a,5);
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
