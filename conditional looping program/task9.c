//9. C Program to Check Uppercase or Lowercase or Digit or Special Character 

#include <stdio.h>

int main() {
    char ch;

    // Input
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Condition
    if ((ch >= 'A' && ch <= 'Z')) {
        printf("%c is an uppercase alphabet.\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("%c is a lowercase alphabet.\n", ch);
    } else if (ch >= '0' && ch <= '9') {
        printf("%c is a digit.\n", ch);
    } else {
        printf("%c is a special character.\n", ch);
    }
}
