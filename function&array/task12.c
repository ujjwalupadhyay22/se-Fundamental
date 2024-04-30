//12. WAP to accept 5 students name and store it in array

#include <stdio.h>
#include <string.h>

int main() {
	int i;
    char names[5][50]; // Array to store 5 names, each name can have maximum length of 49 characters

    // Input names from the user
    printf("Enter names of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Enter name %d: ", i + 1);
        scanf("%s", names[i]); // Assuming names do not contain whitespace
    }

    // Display the names entered by the user
    printf("\nNames of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("%d. %s\n", i + 1, names[i]);
    }
}
