//19. Calculate compound interest 

#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, compoundInterest;
    int n;

    // Input principal amount
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    // Input annual interest rate
    printf("Enter the annual interest rate (in percentage): ");
    scanf("%f", &rate);

    // Input time in years
    printf("Enter the time (in years): ");
    scanf("%f", &time);

    // Input number of times interest is compounded per year
    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);

    // Convert rate from percentage to decimal
    rate = rate / 100;

    // Calculate compound interest
    compoundInterest = principal * pow(1 + (rate / n), n * time) - principal;

    // Display compound interest
    printf("Compound interest: %.2f\n", compoundInterest);

}
