//5th pattern

#include<stdio.h>

int main()
{
	int i,j;
	char ch = 'A';
	
	//outer for loop for row
	for(i=0;i<5;i++)
	{
		//inner loop to print alphabets
		for(j=0;j<=i;j++)
		{
			printf("%c ", 'A' + j); 
		}
		printf("\n");
	}
}
