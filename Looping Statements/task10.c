//10. Write a program you have to make a summation of first and last Digit. (E.g., 
//1234 Ans: -5)

#include <stdio.h>

int main()
{
    int num, sum=0, firstDigit, lastDigit;

    printf("Enter any number to find sum of first and last digit: ");
    scanf("%d", &num);
    
    /* Find last digit to sum */
    lastDigit = num % 10;
    

    /* Copy num to first digit */
    firstDigit = num;

    /* Find the first digit by dividing num by 10 until first digit is left */
    while(num >= 10)
    {
        num = num / 10;
    }
    firstDigit = num;


    /* Find sum of first and last digit*/
    sum = firstDigit + lastDigit; 

    printf("Sum of first and last digit = %d", sum);

}
