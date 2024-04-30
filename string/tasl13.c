//13. Write a program in C to remove characters from a string except alphabets. 

#include <stdio.h>
#include <ctype.h>

int main() {
    char string[100];
    int i,j = 0;

    // Input a string from the user
    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    // Iterate over each character of the string
    for (i = 0; string[i] != '\0'; i++) {
        // Check if the current character is an alphabet
        if (isalpha(string[i])) {
            // If it's an alphabet, keep it in the string and move to the next position
            string[j++] = string[i];
        }
    }
    string[j] = '\0'; // Null-terminate the modified string

    // Print the modified string
    printf("String after removing non-alphabetic characters: %s\n", string);

    return 0;
}
