//22. Accept 3 numbers from user using while loop and check each numbers palindrome

// palidrome number is that number it is from forward and backward same ..121 or 1001

#include<stdio.h>
int palim (int num){
	int original_num = num;
	int reverse_num = 0;
		
	for (;num>0;num/=10){
		int digit = num % 10;// separation
		reverse_num = reverse_num * 10 + digit; // it gives reverse number
	}
	return(original_num == reverse_num);// if condition not true than number is not palidrome
}
int main(){
	int number;
	printf("Enter the number:-");
	scanf("%d", &number);
	if(palim(number)){
		printf("%d is a palim number", number);
	}
	else{
		printf("%d is not a palim number", number);
	}
}
