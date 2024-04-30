//11. WAP to accept 5 numbers from user and display in reverse order using for loop and array 

#include<stdio.h>

int main() {
    int i,numbers[5];

    // Input 5 numbers from the user and store them in an array
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Display the numbers in reverse order
    printf("Numbers in reverse order:\n");
    for (i = 4; i >= 0; i--) {
        printf("%d\n", numbers[i]);
    }
}
