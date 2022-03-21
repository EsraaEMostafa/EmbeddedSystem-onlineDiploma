/*********************************************************************************************
 Name        : Ex5
 Author      : Esraa Ebrahim
 Description : Pointers - Ex5
 Write a program in C to show a pointer to an array which contents are pointer to structure
 *********************************************************************************************/

#include<stdio.h>
struct empl
{
	char *name;
	int id ;
};
int main()
{
	struct empl emp1={"esraa",12} ,emp2 = {"ebrahim",20},emp3={"omar",25} ;
	struct empl (*arr [3])= {&emp1 ,&emp2,&emp3};
	struct empl (*(*ptr)[3])= &arr ;
	printf("the first Employee name : %s\n",(**(*ptr)).name);
	printf("the first Employee ID : %d\n",(**(ptr[0])).id);
	printf("the second Employee name : %s\n",(*(*ptr+1))->name);
	printf("the second Employee ID : %d\n",(*(*ptr+1))->id);
	printf("the third Employee name : %s\n",(**(*ptr+2)).name);
	printf("the third Employee ID : %d\n",(**(*ptr+2)).id);
	return 0 ;
}
