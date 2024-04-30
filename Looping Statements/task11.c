//11. Accept 5 names from user at run time. 

#include <stdio.h>

int main()
{
	int i;
	char name[10];
	
	for(i=1;i<=5;i++)
	{
		printf("Enter your name:");
		scanf("%s",&name);
		
		printf("Your name %s\n",name);
	}
}
