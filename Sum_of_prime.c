#include <stdio.h>

int main() {
    int n, sum = 0, i, j;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 2; i < n; i++) {
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) break;
        }
        if (j > i / 2) sum += i;
    }
    printf("Sum of all prime numbers less than %d: %d\n", n, sum);
    return 0;
}
