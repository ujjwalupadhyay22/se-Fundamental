//11. WAP to find number is even or odd using ternary operator 

#include <stdio.h>

int main() {
    int number;

    // Input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Condition
    (number % 2 == 0) ? printf("%d is even.\n", number) : printf("%d is odd.\n", number);
}
