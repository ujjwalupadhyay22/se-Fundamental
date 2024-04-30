//4th pattern

#include<stdio.h>

int main()
{
	int i,j;
	char num = 1;
	
	//outer loop for row
	for(i=0;i<5;i++)
	{
		//inner loop to print 1 to 15 
		for(j=0;j<=i;j++)
		{
			printf("%d ",num++);
		}
		printf("\n");
	}
}
