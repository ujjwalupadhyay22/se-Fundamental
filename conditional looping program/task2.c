//2.  Write a C program to read the value of an integer m and display the value of m is 1 when m is larger than 0, 0 when m is 0 and -1 when m 
//is less than 0

#include <stdio.h>

int main() {
    int m;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &m);

    // Display different values based on the sign of m
    if (m > 0) {
        printf("The value of m is 1\n");
    } else if (m == 0) {
        printf("The value of m is 0\n");
    } else {
        printf("The value of m is -1");
    }
}

