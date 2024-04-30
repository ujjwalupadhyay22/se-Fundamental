//12. Program of Armstrong Number in C Using For Loop & While Loop 

//Armstrong number cube of the number are the addition of given number
// 153 = 1^3 + 5^3 + 3^3 = 1+125+27 = 153

#include<stdio.h>
#include<math.h>
int main(){
	int num,tem,a,sum;
	printf("Enter the number:-");
	scanf("%d",&num);
	tem = num;
	while (num > 0){
		a = num % 10;// from this line single digit seperate
		sum= sum+(a*a*a);//here we get the cube of single digit
		num = num / 10; // from this line all number combine
	}
	if(tem == sum){
		printf("Number is Armstrong Number");
	}else{
		printf("Number is not an Armstrong Number");
	}
}
