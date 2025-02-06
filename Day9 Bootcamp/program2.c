#include <stdio.h>

#define MAX 100

// Function to transpose the matrix
void transpose(int matrix[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // Swap elements
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

// Function to reverse each row of the matrix
void reverseRows(int matrix[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        int start = 0, end = n - 1;
        while (start < end) {
            int temp = matrix[i][start];
            matrix[i][start] = matrix[i][end];
            matrix[i][end] = temp;
            start++;
            end--;
        }
    }
}

// Function to print the matrix
void printMatrix(int matrix[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    int matrix[MAX][MAX];

    // Input the matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Rotate the matrix 90 degrees clockwise
    transpose(matrix, n);
    reverseRows(matrix, n);

    // Print the rotated matrix
    printf("Matrix after 90 degree rotation:\n");
    printMatrix(matrix, n);

    return 0;
}