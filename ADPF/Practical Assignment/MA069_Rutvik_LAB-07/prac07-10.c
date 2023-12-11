#include <stdio.h>

#define MAX_SIZE 10

int main() {
    int n;

    printf("Enter the size of the square matrices: ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX_SIZE) {
        printf("Invalid matrix size.\n");
        return 1;  
    }

    int matrix1[MAX_SIZE][MAX_SIZE], matrix2[MAX_SIZE][MAX_SIZE], resultMatrix[MAX_SIZE][MAX_SIZE];

    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements for the second matrix:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("\nTranspose of the first matrix:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d\t", matrix1[j][i]);
        }
        printf("\n");
    }

    printf("\nTranspose of the second matrix:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d\t", matrix2[j][i]);
        }
        printf("\n");
    }

    printf("\nAddition of matrices:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            resultMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
            printf("%d\t", resultMatrix[i][j]);
        }
        printf("\n");
    }

    printf("\nSubtraction of matrices:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            resultMatrix[i][j] = matrix1[i][j] - matrix2[i][j];
            printf("%d\t", resultMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
