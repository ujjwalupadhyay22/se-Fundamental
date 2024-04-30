//1. Write a program in C to find the length of a string without using library functions. 

#include<stdio.h>
#include <string.h>
int main()
{
	char str[30];
	int i,len=0;

	printf("Enter a string to find the length of a string:");
	//gets read a string
	gets(str);
	
	//count the length of string
	for(i=0;str[i] !='\0';i++)
	{
		len++;
	}
	
	//print the lenght of string
	printf("The length of a string is: %d",len);
}
