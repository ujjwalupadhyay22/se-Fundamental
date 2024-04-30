//3. WAP to find reverse of string using recursion 

#include <stdio.h>
int reverseSentence() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        reverseSentence();
        printf("%c", c);
    }
}

int main() {
    printf("Enter a sentence: ");
    reverseSentence();
    return 0;
}
