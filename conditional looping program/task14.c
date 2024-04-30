//14. WAP to find the largest of three numbers. 

#include <stdio.h>

int main() {
    float num1, num2, num3, largest;

    // Input
    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    // Assume the first number is the largest
    largest = num1;

    // Compare with the second number
    if (num2 > largest) {
        largest = num2;
    }

    // Compare with the third number
    if (num3 > largest) {
        largest = num3;
    }

    // Print the largest number
    printf("The largest number among %.2f, %.2f, and %.2f is: %.2f\n", num1, num2, num3, largest);
}
