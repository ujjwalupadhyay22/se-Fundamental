//18. Calculate person’s Annual salary 

#include <stdio.h>

int main() {
    float monthlySalary, annualSalary;

    // Input monthly salary
    printf("Enter your monthly salary: ");
    scanf("%f", &monthlySalary);

    // Check if monthly salary is valid
    if (monthlySalary < 0) {
        printf("Invalid monthly salary. Please enter a positive value.\n");
    }

    // Calculate annual salary
    annualSalary = monthlySalary * 12;

    // Display annual salary
    printf("Your annual salary is: %.2f\n", annualSalary);

}
