#include <stdio.h>

int main() {
    int n, i, isPrime = 1;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check divisibility from 2 to n-1
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            isPrime = 0;  // Not a prime number if divisible by i
            break;
        }
    }

    // Printing the result
    if (n == 1) {
        printf("Not Prime\n");  // 1 is not prime
    } else if (isPrime) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }

    return 0;
}
