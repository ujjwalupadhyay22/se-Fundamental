//31. Convert kilometers into meters 

#include <stdio.h>

int main() {
    float kilometers, meters;

    // Input distance in kilometers
    printf("Enter distance in kilometers: ");
    scanf("%f", &kilometers);

    // Convert kilometers to meters (1 kilometer = 1000 meters)
    meters = kilometers * 1000;

    // Display the result
    printf("%.2f kilometers is equal to %.2f meters.\n", kilometers, meters);

}
