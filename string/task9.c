//9. Write a program in C to find the maximum number of characters in a string.

#include<stdio.h>
#include<string.h>
int main()
{
	char string[50];
	printf("Enter a string to find the maximum number of characters:");
	//gets read a string
	gets(string);
	//printf number of characters in string
	printf("maximum number of characters in a string:%d",strlen(string));
}
