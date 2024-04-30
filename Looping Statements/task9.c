//9. Write a program make a summation of given number (E.g., 1523 Ans: -11) 

#include <stdio.h>

int main()
{
	int i,num,sum=0;
	
	for(i=1;i<=5;i++)
	{
		printf("Enter number:",i);
		scanf("%d",&num);
		sum +=num;//sum=sum+num
	}
	printf("sum of given number is: %d",sum);
}
