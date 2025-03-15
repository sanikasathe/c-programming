#include <stdio.h>

int main() {
    int m, n, p;

    // Input the dimensions of the first matrix
    printf("Enter the dimensions of the first matrix (m x n): ");
    scanf("%d %d", &m, &n);

    int matrix1[m][n];

    printf("Enter the elements of the first matrix:\n");
    // Input elements of the first matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input the dimensions of the second matrix
    printf("Enter the dimensions of the second matrix (n x p): ");
    scanf("%d %d", &n, &p);

    int matrix2[n][p];

    printf("Enter the elements of the second matrix:\n");
    // Input elements of the second matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Resultant matrix after multiplication
    int result[m][p];

    // Matrix multiplication
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            result[i][j] = 0; // Initialize the result element to 0
            for (int k = 0; k < n; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Output the resulting matrix
    printf("The resulting matrix is:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
