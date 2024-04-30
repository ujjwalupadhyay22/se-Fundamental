//22. Accept 3 numbers from user using while loop and check each numbers palindrome

#include <stdio.h>

int main() {
    int num, originalNum, reversedNum, remainder;

    // Loop to accept 3 numbers from the user
    int count = 0;
    while (count < 3) {
        printf("Enter number %d: ", count + 1);
        scanf("%d", &num);

        originalNum = num;
        reversedNum = 0;

        // Reverse the number
        while (originalNum != 0) {
            remainder = originalNum % 10;
            reversedNum = reversedNum * 10 + remainder;
            originalNum /= 10;
        }

        // Check if the number is palindrome
        if (num == reversedNum) {
            printf("%d is a palindrome.\n", num);
        } else {
            printf("%d is not a palindrome.\n", num);
        }

        count++;
    }
    
}
