/*********************************************************************************************
 Name        : Ex1
 Author      : Esraa Ebrahim
 Description : Homework 5 - Ex1
 C program to store information (name, roll and marks) of a student using structure
 *********************************************************************************************/
#include<stdio.h>
#define SIZE 50
struct information
{
	char name[SIZE] ;
	int roll ;
	float marks ;
} student;
int main()
{
	printf("Enter information of student: ");
	printf("\nEnter name: ");
	fflush(stdin);fflush(stdout);
	scanf("%s",student.name);
	printf("Enter roll number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&student.roll);
	printf("Enter marks: ");
	fflush(stdin);fflush(stdout);
	scanf("%g",&student.marks);
	printf("\nDisplaying information: ");
	printf("\nname: %s",student.name);
	printf("\nRoll: %d",student.roll);
	printf("\nMarks: %.2f",student.marks);
	return 0 ;
}
