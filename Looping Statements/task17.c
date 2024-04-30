//17. Calculate 5 numbers from user and calculate number of even and odd using of while loop  

#include <stdio.h>

int main() {
    int number, even_count = 0, odd_count = 0, count = 0;

    printf("Enter 5 numbers:\n");
    while (count < 5) {
        printf("Enter number %d: ", count + 1);
        scanf("%d", &number);
        
        // Check if the number is even or odd
        if (number % 2 == 0)
            even_count++;
        else
            odd_count++;

        count++;
    }

    printf("Number of even numbers: %d\n", even_count);
    printf("Number of odd numbers: %d\n", odd_count);

}
