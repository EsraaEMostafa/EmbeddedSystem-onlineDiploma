/*********************************************************************************************
 Name        : Ex2
 Author      : Esraa Ebrahim
 Description : Homework 5 - Ex2
 C program to add two distance(in inch-feet) system using structure.
 *********************************************************************************************/
#include<stdio.h>
struct  distance
{
	int feet ;
	float inch ;
}dis1,dis2,sum;
int main()
{
	printf("Enter information for 1st distance: ");
	printf("\nEnter feet: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&dis1.feet);
	printf("Enter inch: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&dis1.inch);
	printf("\nEnter information for 2st distance: ");
	printf("\nEnter feet: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&dis2.feet);
	printf("Enter inch: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&dis2.inch);
	sum.feet = dis1.feet + dis2.feet ;
	sum.inch = dis1.inch + dis2.inch ;
	if(sum.inch >= 12.0)
	{
		sum.feet++ ;
		sum.inch -= 12.0 ;
	}
	printf("\nsum of distances = %d'-%.1f",sum.feet ,sum.inch);
	return 0 ;
}
