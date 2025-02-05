#include<stdio.h>

int main()
{
    int n, a[100], i, j, temp;

    // Input size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input the values into the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Print the array
    printf("Display array elements:\n");
    for (i = 0; i < n; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    // Reverse the array
    printf("\nDisplay array in reverse order:\n");
    for (i = 0, j = n - 1; i < j; i++, j--) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    // Print the reversed array
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
