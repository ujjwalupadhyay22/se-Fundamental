//Write a program in C to read any Month Number in integer and display the number of days for this month. 

#include <stdio.h>

int main() {
    int month,days;

    // Input month number
    printf("Enter the month number from (1-12): ");
    scanf("%d", &month);

    // Check if the month number is valid
    if (month < 1 || month > 12) {
        printf("Invalid month number.\n");
    } else {
       
        switch(month) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                days = 31;
                break;
            case 4: case 6: case 9: case 11:
                days = 30;
                break;
            case 2:
                days = 28;
                break;
        }
        printf("Number of days in entered month : %d\n", month, days);
    }
}
