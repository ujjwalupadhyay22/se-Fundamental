//3. Write a program in C to print individual characters of a string in reverse order

#include <stdio.h>
#include <string.h>

int main() {
	int i;
    char string[100];

    // Input a string from the user
    printf("Enter a string: ");
    scanf("%s", string);

    // Calculate the length of the string
    int length = strlen(string);

    // Print individual characters of the string in reverse order
    printf("Individual characters of the string in reverse order:\n");
    for (i = length - 1; i >= 0; i--) {
        printf("%c\n", string[i]);
    }

}
