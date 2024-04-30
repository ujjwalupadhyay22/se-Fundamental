//33. C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3) 

#include <stdio.h>

int main() {
    int number, power1, power2, power3;

    // Input an integer
    printf("Enter an number: ");
    scanf("%d", &number);

    // Calculate the first three powers
    power1 = number;
    power2 = number * number;
    power3 = number * number * number;

    // Print the first three powers
    printf("First three powers of %d are:\n", number);
    printf("%d^1 = %d\n", number, power1);
    printf("%d^2 = %d\n", number, power2);
    printf("%d^3 = %d\n", number, power3);

}
