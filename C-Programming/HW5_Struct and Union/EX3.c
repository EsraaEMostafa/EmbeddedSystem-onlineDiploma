/*********************************************************************************************
 Name        : Ex3
 Author      : Esraa Ebrahim
 Description : Homework 5 - Ex3
 C program to add two complex numbers by passing structure to function
 *********************************************************************************************/
#include<stdio.h>
struct complex
{
	float real ;
	float imag ;
}num1,num2,resualt;
struct complex add(struct complex n1,struct complex n2)
{
	struct complex res  ;
	res.real = n1.real+n2.real ;
	res.imag = n1.imag+n2.imag ;
	return res ;
}
int main()
{
	printf("For 1st complex number: ");
	printf("\nEnter real and imaginary respectively: ");
	fflush(stdin);fflush(stdout);
	scanf("%f%f",&num1.real,&num1.imag);

	printf("For 2st complex number: ");
	printf("\nEnter real and imaginary respectively: ");
	fflush(stdin);fflush(stdout);
	scanf("%f%f",&num2.real,&num2.imag);

	resualt = add(num1 ,num2);

	printf("Sum=%.1f+%.1fi",resualt.real,resualt.imag);

}
