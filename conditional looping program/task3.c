//3. WAP to check if the given year is a leap year or not. 

#include <stdio.h>

int main() {
    int year;

    // Input the year
    printf("Enter the year: ");
    scanf("%d", &year);

    // Check if the year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
}
