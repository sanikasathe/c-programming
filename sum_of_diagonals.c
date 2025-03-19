#include <stdio.h>

int main() {
    int n, i, j;
    int sum = 0;

   
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    // Declare the matrix
    int matrix[n][n];

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Sum the diagonal elements 
    for(i = 0; i < n; i++) {
        sum += matrix[i][i]; // Primary diagonal
        sum += matrix[i][n-1-i]; // Secondary diagonal
    }

    // Print the result
    printf("The sum of diagonal elements is: %d\n", sum);

    return 0;
}

