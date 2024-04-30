//32. Accept 2 numbers and find out its sum check it size 

#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculate the sum
    sum = num1 + num2;

    // Display the sum
    printf("Sum of %d and %d is: %d\n", num1, num2, sum);

    // Check the size of the sum
    if (sum >= -32768 && sum <= 32767) {
        printf("Size of the sum is: short\n");
    } else {
        printf("Size of the sum is: long\n");
    }

}
