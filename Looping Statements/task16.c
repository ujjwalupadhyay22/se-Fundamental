//16. Calculate the Sum of Natural Numbers Using the While Loop 

#include <stdio.h>

int main() {
    int nat, i = 1, sum = 0;

    // Input the value of n
    printf("Enter a positive integer: ");
    scanf("%d", &nat);

    // Calculate the sum of natural numbers from 1 to n
    while (i <= nat) {
        sum += i;
        i++;
    }

    // Print the sum
    printf("Sum of natural numbers from 1 to %d is %d.\n", nat, sum);
}
