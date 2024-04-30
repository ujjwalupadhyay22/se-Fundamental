#include<stdio.h>
//2. Write a program to make Simple calculator (to make addition, subtraction,
//multiplication, division and modulo)

main()
{
	printf("Enter 1 for Addition \n");
	printf("Enter 2 for Subtraction \n");
	printf("Enter 3 for Multiplication \n");
	printf("Enter 4 for Division\n");
	int n;
	printf("Enter your choice : ");
	scanf("%d",&n);
	
	if(n==1){
	int a,b;
	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);
	printf("Addition of number is : %d",a+b );	
	}	
	else if(n==2){
	int a,b;
	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);
	printf("Addition of number is : %d",a-b );	
	}	
	else if(n==3){
	int a,b;
	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);
	printf("Addition of number is : %d",a*b );	
	}	
	else if(n==4){
	int a,b;
	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);
	printf("Addition of number is : %d",a%b );	
	}	
	else{
		printf("Invalid Number");
	}
}

