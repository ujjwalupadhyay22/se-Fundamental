// 19. Write a program in C to calculate and print the electricity bill of a given 
//customer. The customer ID, name, and unit consumed by the user should 
//be captured from the keyboard to display the total amount to be paid to the 
//customer. The charge are as follow : 


#include <stdio.h>

int main() {
    int customer_id, units;
    char customer_name[50];
    float charge_rate, total_amount, surcharge, bill_without_surcharge;

    // Input customer details
    printf("Enter customer ID: ");
    scanf("%d", &customer_id);

    printf("Enter customer name: ");
    scanf("%s", customer_name);

    printf("Enter units consumed: ");
    scanf("%d", &units);

    // Calculate charge rate based on units consumed
    if (units <= 350) {
        charge_rate = 1.20;
    } else if (units > 350 && units < 600) {
        charge_rate = 1.50;
    } else if (units >= 600 && units < 800) {
        charge_rate = 1.80;
    } else {
        charge_rate = 2.00;
    }

    // Calculate total amount without surcharge
    total_amount = units * charge_rate;

    // Apply surcharge if total amount exceeds Rs. 800
    if (total_amount > 800) {
        surcharge = total_amount * 0.18;
        total_amount += surcharge;
    }

    // Ensure minimum bill of Rs. 256
    if (total_amount < 256) {
        total_amount = 256;
    }

    // Print the electricity bill
    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customer_id);
    printf("Customer Name: %s\n", customer_name);
    printf("Units Consumed: %d\n", units);
    printf("Total Amount to be Paid: Rs. %.2f\n", total_amount);
}
