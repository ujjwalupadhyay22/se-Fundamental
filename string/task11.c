//11. Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa.

#include<stdio.h>
#include<string.h>
#include <ctype.h>
int main()
{
	char str[50];
	int i;
	//user inputs string
	printf("Enter a string:");
	//gets read a string
	gets(str);
	
	//loop to read string 
	for(i=0;str[i] !='\0';i++)
	{
		//check lowercase characters 
		if (islower(str[i]))
		{
			printf("%c", toupper(str[i]));
		}
		
		else
		{
			printf("%c", tolower(str[i]));
		}
	}
}
