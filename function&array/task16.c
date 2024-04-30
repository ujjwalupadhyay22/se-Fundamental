//16. Accept 5 numbers from user and perform sum of array 

#include <stdio.h>

int main() {
    int i,numbers[5],sum = 0;

    // Input 5 numbers from the user and store them in an array
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Calculate the sum of the numbers in the array
    for (i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    // Display the sum of the array
    printf("Sum of the array: %d\n", sum);
}
