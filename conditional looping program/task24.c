//24. Write a C program to input electricity unit charges and calculate total 
//electricity bill according to the given condition: 
//For first 50 units Rs. 0.50/unit 
//For next 100 units Rs. 0.75/unit 
//For next 100 units Rs. 1.20/unit 
//For unit above 250 Rs. 1.50/unit 
//An additional surcharge of 20% is added to the bill


#include <stdio.h>

int main() {
    float units, bill_amount, surcharge = 0.20;

    printf("Enter the number of units consumed: ");
    scanf("%f", &units);

    // Calculate the total electricity bill based on unit charges
    if (units <= 50) {
        bill_amount = units * 0.50;
    } else if (units <= 150) {
        bill_amount = 50 * 0.50 + (units - 50) * 0.75;
    } else if (units <= 250) {
        bill_amount = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    } else {
        bill_amount = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }

    // Add surcharge to the bill amount
    bill_amount += bill_amount * surcharge;

    // Print the total electricity bill
    printf("Total Electricity Bill: Rs. %.2f\n", bill_amount);
}
