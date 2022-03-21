/*********************************************************************************************
 Name        : Ex4
 Author      : Esraa Ebrahim
 Description : Pointers - Ex4
 Write a program in C to print the elements of an array in reverse order.
 *********************************************************************************************/

#include<stdio.h>

int main()
{
	int arr[15] ;
	int i , n;
	int *ptr = arr ;
	printf("Input the number of elements to store in the array (max 15) :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n) ;
	printf("Input %d number of elements in the array :\n",n);
	for(i=0;i<n;i++)
	{
		printf("element - %d:",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%d",ptr);
		ptr++ ;
	}
	ptr--;
	printf("The elements of array in reverse order are :\n");
	for(i=n-1 ;i >=0 ;i--)
	{
		printf("element - %d : %d\n",i+1,*ptr);
		ptr-- ;
	}
	return 0 ;
}
