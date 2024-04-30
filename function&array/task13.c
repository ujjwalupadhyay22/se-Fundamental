//13. WAP to accept 5 numbers from user and check entered number is even or odd using of array

#include <stdio.h>

int main() {
    int i,numbers[5];

    // Input 5 numbers from the user and store them in an array
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Check if each number in the array is even or odd
    printf("\nEven/Odd Check:\n");
    for (i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d is even.\n", numbers[i]);
        } else {
            printf("%d is odd.\n", numbers[i]);
        }
    }
}
