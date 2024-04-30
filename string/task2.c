//2. Write a program in C to separate individual characters from a string.

#include <stdio.h>

int main() {
	int i;
    char string[100];

    // Input a string from the user
    printf("Enter a string: ");
    scanf("%s", string);

    // Separate individual characters from the string and print them
    printf("Individual characters separated from the string:\n");
    for (i = 0; string[i] != '\0'; i++) {
        printf("%c\n", string[i]);
    }
}
