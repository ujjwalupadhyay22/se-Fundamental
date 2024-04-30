//2. WAP to accept 5 numbers from user and display all numbers

#include<stdio.h>
int main()
{
	int i,num;
	
	for(i=1;i<=5;i++)
	{
		printf("%d Enter number:",i);
		
		scanf("%d",&num);
		//print the enter numbers
		printf(" You entered %d\n",num);
	}
}
