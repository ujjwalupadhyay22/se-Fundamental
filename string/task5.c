//5. Write a program in C to compare two strings without using string library functions. 

#include <stdio.h>

int main() {
    char string1[100], string2[100];
    int isEqual = 1; // Assume strings are equal initially

    // Input the first string from the user
    printf("Enter the first string: ");
    scanf("%s", string1);

    // Input the second string from the user
    printf("Enter the second string: ");
    scanf("%s", string2);

    // Compare the characters of both strings
    int i;
    for (i = 0; string1[i] != '\0' && string2[i] != '\0'; i++) {
        if (string1[i] != string2[i]) {
            isEqual = 0; // Set isEqual to 0 if characters are not equal
            break;
        }
    }

    // Check if the lengths of both strings are equal
    if (string1[i] != '\0' || string2[i] != '\0') {
        isEqual = 0; // Set isEqual to 0 if lengths are not equal
    }

    // Print the result
    if (isEqual) {
        printf("The two strings are equal.\n");
    } else {
        printf("The two strings are not equal.\n");
    }
}
