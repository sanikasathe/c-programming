#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of values: ");
    scanf("%d", &n);

    int values[n];
    int odd_numbers[n];
    int even_numbers[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &values[i]);
    }

    int odd_count = 0, even_count = 0;
    for (int i = 0; i < n; i++) {
        if (values[i] % 2 != 0) {
            odd_numbers[odd_count] = values[i];
            odd_count++;
        } else {
            even_numbers[even_count] = values[i];
            even_count++;
        }
    }

    // Printing odd numbers 
    printf("Odd numbers: ");
    for (int i = 0; i < odd_count; i++) {
        printf("%d ", odd_numbers[i]);
    }

    // Printing even numbers
    printf("\nEven numbers: ");
    for (int i = 0; i < even_count; i++) {
        printf("%d ", even_numbers[i]);
    }

    printf("\n");
    return 0;
}
