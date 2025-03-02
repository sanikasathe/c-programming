#include <stdio.h>

int main() {
    int matrix[10][10];  // Define a matrix with maximum size 10x10
    int row, col;
    int primaryDiagonalSum = 0, secondaryDiagonalSum = 0;

    // Input matrix dimensions and elements
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &col);

    // Check if the matrix is square (i.e., rows == columns)
    if (row != col) {
        printf("Matrix must be square to calculate diagonals' sum.\n");
        return 0;
    }

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of the primary diagonal and secondary diagonal
    for (int i = 0; i < row; i++) {
        primaryDiagonalSum += matrix[i][i];  // Primary diagonal: (i, i)
        secondaryDiagonalSum += matrix[i][row - i - 1];  // Secondary diagonal: (i, row-i-1)
    }

    // Output the sums of both diagonals
    printf("Sum of primary diagonal: %d\n", primaryDiagonalSum);
    printf("Sum of secondary diagonal: %d\n", secondaryDiagonalSum);

    return 0;
}
