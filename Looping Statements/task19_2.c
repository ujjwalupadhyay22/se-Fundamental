//2nd pattern

# include<stdio.h>

int main()
{
	int i,j;
	char ch ='A';
	
	//outer for loop: to print number of row
	for(i=1;i<=5;i++)
	{
		//inner for loop: to print characters
		for(j=1;j<=i;j++)
		{
			printf("%c ",ch++);
		}
		printf("\n");
	}
}
