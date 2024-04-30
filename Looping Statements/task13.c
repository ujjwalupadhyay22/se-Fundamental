//13. calculate the Factorial of a Given Number using while loop

#include<stdio.h>
int main(){
	int num, i, factorial=1;
	printf("Enter the number:- ");
	scanf("%d",&num);
	i=1;
	while(i<=num){
		factorial =factorial*i;
		i++;
	}
	printf("factorial of %d is %d ",num,factorial);
}
