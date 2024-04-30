//6. WAP to print Fibonacci series up to given numbers 

#include<stdio.h>
int main(){
	int i, a=0, b=1, c, num;
	printf("Enter the value you want to find factorial:- ");
	scanf("%d", &num);
	printf("%d,%d,",a,b);
	for(i=3;i<=num;i++){
		c=a+b;
		a=b;
		b=c;
		printf("%d,",c);
	}
}
