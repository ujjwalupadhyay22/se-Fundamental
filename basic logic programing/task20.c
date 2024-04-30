//20. Accept monthly salary from the user and deduct 10% insurance premium, 
//10% loan installment find out of remaining salary. 

#include <stdio.h>

int main() {
    float monthlySalary, remainingSalary, insurancePremium, loanInstallment;

    // Input monthly salary
    printf("Enter your monthly salary: ");
    scanf("%f", &monthlySalary);

    // Calculate insurance premium (10%)
    insurancePremium = 0.1 * monthlySalary;

    // Deduct insurance premium from the monthly salary
    remainingSalary = monthlySalary - insurancePremium;

    // Calculate loan installment (10% of remaining salary)
    loanInstallment = 0.1 * remainingSalary;

    // Deduct loan installment from the remaining salary
    remainingSalary -= loanInstallment;

    // Display results
    printf("\nMonthly Salary: %.2f\n", monthlySalary);
    printf("Insurance Premium (10%%): %.2f\n", insurancePremium);
    printf("Loan Installment (10%% of remaining salary): %.2f\n", loanInstallment);
    printf("Remaining Salary after deductions: %.2f\n", remainingSalary);

}
