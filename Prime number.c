
#include <stdio.h>

void printPrimeNumbers(int n) {
    int i, j;
    for (i = 2; i <= n; i++) {
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                break;
            }
        }
        if (j > i / 2) {
            printf("%d ", i);
        }
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Prime numbers up to %d: ", n);
    printPrimeNumbers(n);
    return 0;
}
