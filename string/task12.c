//12. Write a program in C to find the number of times a given word 'is' appears in the given string.

#include<stdio.h>
#include<string.h>

int main()
{
	char word[ ] = "is", str[100],len;
	int i,count;
	
	//user inputs string
	printf("Enter a string to find the number of times 'is' appears:");
	//gets read a string
	gets(str);
	
	len = strlen(str);
	
	for(i=0;i < len;i++)
	{
		if (strstr(str + i, word) == str + i) {
            count++;
        }
	}
	printf("number of times a given word 'is' appear:%d",count);
}
