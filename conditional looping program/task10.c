//10. WAP to check whether a number is negative, positive or zero. 

#include <stdio.h>

int main() {
    int number;

    // Input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Condition
    if (number > 0) {
        printf("%d is a positive number.\n", number);
    } else if (number < 0) {
        printf("%d is a negative number.\n", number);
    } else {
        printf("The number is zero.\n");
    }
}
