/*********************************************************************************************
 Name        : Ex4
 Author      : Esraa Ebrahim
 Description : Homework 5 - Ex4
 C program to store information of students using structure
 *********************************************************************************************/
#include<stdio.h>
#define SIZE 50
struct information
{
	char name[SIZE] ;
	int roll ;
	float marks ;
} student[10];
int main()
{
	int i ;
	printf("Enter information of students: ");
	for(i=0;i<10;i++)
	{
		printf("\nFor roll number %d ",i+1);
		printf("\nEnter name: ");
		fflush(stdin);fflush(stdout);
		scanf("%s",student[i].name);
		printf("Enter roll number: ");
		fflush(stdin);fflush(stdout);
		scanf("%d",&student[i].roll);
		printf("Enter marks: ");
		fflush(stdin);fflush(stdout);
		scanf("%g",&student[i].marks);
	}
	printf("\nDisplaying information of students: ");
	for(i=0;i<10;i++)
	{
		printf("\nInformationFor roll number %d ",i+1);
		printf("\nname: %s",student[i].name);
		printf("\nRoll: %d",student[i].roll);
		printf("\nMarks: %.2f",student[i].marks);
	}
	return 0 ;
}
