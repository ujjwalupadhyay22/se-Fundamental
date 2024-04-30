//19. Patterns: 

//1st Pattern

#include<stdio.h>

int main()
{
	int i,j;
	
	//outer for loop to print row 
	for (i=1;i<=5;i++)
	{
		//inner loop to print 1 or 0
		for(j=1;j<=i;j++)
		{
			if(j %2==0)
			{
				printf("0 ");
			}
			else
			{
				printf("1 ");
			}
		}
		
		printf("\n");
	}
}

//2nd pattern

//# include<stdio.h>
//
//int main1()
//{
//	int i,j;
//	char ch ='A';
//	
//	//outer for loop: to print number of row
//	for(i=1;i<=5;i++)
//	{
//		//inner for loop: to print characters
//		for(j=1;j<=i;j++)
//		{
//			printf("%c ",ch++);
//		}
//		printf("\n");
//	}
//}
