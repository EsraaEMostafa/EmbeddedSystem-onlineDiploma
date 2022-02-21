/*********************************************************************************************
 Name        : midterm1_code 2
 Author      : Esraa  Ebrahim
 Description :
 C function to take an integer number and calculate it's square root.:10 ->output:3.126
 *********************************************************************************************/

#include<stdio.h>
#include<math.h>

float square_root(int n)
{
	float s ;
	s = sqrt(n) ;
	return s ;
}
int main()
{
	int num =10 ;
	float res =  square_root(num);
	printf("the square root = %.3f " ,res);
	return 0;
}
