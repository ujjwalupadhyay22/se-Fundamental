//15. Calculate sum of 10 numbers using of while loop 

#include <stdio.h>

int main() {
    int sum = 0, count = 0, number;

    printf("Enter 10 numbers:\n");
    while (count < 10) {
        printf("Enter number %d: ", count + 1);
        scanf("%d", &number);
        sum += number;
        count++;
    }

    printf("Sum of the 10 numbers: %d\n", sum);
}
