//12. WAP to find maximum number among 3 numbers using ternary operator 

#include <stdio.h>

int main() {
    int num1, num2, num3, max;

    // Input
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Condition
    max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    // Print the max number
    printf("The maximum number among %d, %d, and %d is: %d\n", num1, num2, num3, max);
}
