/*********************************************************************************************
 Name        : midterm1_code 9
 Author      : Esraa  Ebrahim
 Description :
 c function to reverse words in string : input: mohamed gamal output:gamal mohamed
 *********************************************************************************************/
#include<stdio.h>
#include<string.h>
void reverse_words(char*str ,int s)
{
	int i , j , k=0;
	char word [50];
	for(i=s-1;i>=0;i--)
	{
		if(str[i] == ' ')
		{
			for(j = k-1 ;j>=0;j--)
			{
				printf("%c",word[j]);
			}
			printf(" ");
			k=0 ;
		}
		else
		{
			word[k] = str[i] ;
			k++ ;
		}
	}
	if(k!=0)
	{
		for(j = k-1 ;j>=0;j--)
		{
			printf("%c",word[j]);
		}
	}
}
int main()
{
	char str[50] = "esraa ebrahim";
	reverse_words(str,strlen(str));
	return 0;
}
