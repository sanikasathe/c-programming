#include <stdio.h>

int main() {
    int N = 153;
    int sum = 0, temp, digit;

    temp = N;

    while (temp > 0) {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }

    if (sum == N) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
