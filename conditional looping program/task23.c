//23. Accept the input month number and print number of days in that month. 

#include <stdio.h>

int main() {
    int month_number, days;

    printf("Enter the month number from (1-12): ");
    scanf("%d", &month_number);

    // Check condition
    if (month_number < 1 || month_number > 12) {
        printf("Invalid month number.\n");
    } else {
        switch(month_number) {
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
        printf("Number of days in month %d: %d\n", month_number, days);
    }
}
