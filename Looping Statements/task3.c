//3. WAP to take 10 no. Input from user find out below values 
//a. How many Even numbers are there 
//b. How many odd numbers are there 
//c. Sum of even numbers 
//d. Sum of odd numbers  

#include<stdio.h>
int main() {
	int i,num,oddcount=0,evencount=0,sumodd=0,sumeven=0;
	for(i=0;i<=10;i++){
		printf("Enter the number:- ");
		scanf("%d",&num);
		
		if(num % 2 == 0){
			evencount = evencount+1;
			sumeven=sumeven+num;
		}
		else{
			oddcount = oddcount +1;
			sumodd=sumodd+num;
		}
	}
		printf("Total even numbers are %d \n", evencount);
		printf("Total odd numbers are %d \n", oddcount);
		printf("Total sum of even numbers are %d \n", sumeven);
		printf("Total sum of odd numbers are %d \n", sumodd);
}
