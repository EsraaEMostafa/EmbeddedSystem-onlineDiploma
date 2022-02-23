/*********************************************************************************************
 Name        : Ex6
 Author      : Esraa Ebrahim
 Description : Homework 5 - Ex6
 *********************************************************************************************/
#include<stdio.h>
union job
{
	char name[32] ;
	float salary ;
	int worker_no ;
}u;
struct job1
{
	char name[32] ;
	float salary ;
	int worker_no ;
}s;
int main()
{
	printf("Size of union=%d\n",sizeof(u));
	printf("Size of structure=%d",sizeof(s));
	return 0 ;
}
