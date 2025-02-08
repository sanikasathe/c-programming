#include <stdio.h>

// Function to calculate power using recursion
int power(int base, int exponent) {
    // Base case
    if (exponent == 0) {
        return 1;
    } else {
        // Recursive call
        return base * power(base, exponent - 1);
    }
}

int main() {
    int base, exponent;

    // Input base and exponent from user
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    // Call the power function and display the result
    printf("%d^%d = %d\n", base, exponent, power(base, exponent));

    return 0;
}

