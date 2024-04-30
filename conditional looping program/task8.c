//8. WAP to accept the height of a person in centimeters and categorize the person according to their height. 

#include <stdio.h>

int main() {
    float height;

    // Input 
    printf("Enter the height in centimeters: ");
    scanf("%f", &height);

    // condition
    if (height < 0) {
        printf("Invalid height entered.\n");
    } else if (height < 150) {
        printf("The person is short.\n");
    } else if (height >= 150 && height < 180) {
        printf("The person is average in height.\n");
    } else {
        printf("The person is tall.\n");
    }
}
