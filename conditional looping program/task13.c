//13. WAP to find minimum number among 3 numbers using ternary operator

#include <stdio.h>

int main() {
    int num1, num2, num3, min;

    // Input
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Condition
    min = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);

    // Print the min number
    printf("The minimum number among %d, %d, and %d is: %d\n", num1, num2, num3, min);
}
