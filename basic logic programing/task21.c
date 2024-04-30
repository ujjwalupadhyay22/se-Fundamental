#include<stdio.h>
//21.Accept 2 numbers from user and swap 2 numbers with using 3rd variable
//and without using 3rd variable
main()
{
	// using third variable
//	int a,b,c;
//	printf("Enter first number: ");
//	scanf("%d",&a);
//	printf("Enter second number: ");
//	scanf("%d",&b);
	
//	c=a; // value of a goes to c
//	a=b; // value of b goes to c
//	b=c; // value of c goes to b
	
//	printf("first number is %d \n" ,a);
//	printf("first number is %d \n",b);
	
	// without using third variable
	
	int a,b;
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	a = a+b;
	b = a-b;
	a = a-b;
	printf("first number is %d \n" ,a);
	printf("first number is %d \n",b);
	
	
}
