#include<stdio.h>
//22.Calculate compound interest (Compound Interest formula:
//a. Formula to calculate compound interest annually is given by:
//Amount= P(1 + R/100)t
//b. Compound Interest = Amount – P

main()
{
int num1, num2;

    // Accepting two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Swapping using multiplication and division
    num1 = num1 * num2;  // Store the product of the two numbers in num1
    num2 = num1 / num2;  // Store num1/num2 in num2 (which is essentially num1)
    num1 = num1 / num2;  // Store num1/num2 in num1 (which is essentially num2)

    printf("After swapping using multiplication and division:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);	
}
