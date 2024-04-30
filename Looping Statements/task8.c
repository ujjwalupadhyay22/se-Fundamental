//8. Write a program to find out the max from given number (E.g., No: -1562 Max number is 6) 

#include <stdio.h>

int main() 
{
	int i,max=0,num;
	
	for(i=1;i<=5;i++)
	{
		printf("Enter a number to find max number: ",i);
		scanf("%d",&num);
		
		//condition
		if(max < num)
		{
			max = num;
		}
	}
	
	printf("Max number is = %d",max);
}
