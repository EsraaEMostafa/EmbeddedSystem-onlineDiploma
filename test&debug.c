/*
 * test&debug.c
 *
 *  Created on: Jan 12, 2022
 *      Author: LENOVO
 */

#include <stdio.h>

int main ()
{
	int i = 0 , j ;
	for (i =0 ;i<3;i++)
	{
		for (j =0 ;j<3 ;j++)
		{
			printf("%d ",j+1);
		}
		printf("\n");
	}
}
