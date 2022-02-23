/*********************************************************************************************
 Name        : Ex5
 Author      : Esraa Ebrahim
 Description : Homework 5 - Ex5
 C program to find area of a circle, passing argument to macros
 *********************************************************************************************/
#include<stdio.h>
#define PI 3.14
#define AREA(R) (PI*R*R)
int main()
{
	int r ;
	printf("Enter the radius: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&r);
	printf("Area = %.2f",AREA(r));
	return 0 ;
}
