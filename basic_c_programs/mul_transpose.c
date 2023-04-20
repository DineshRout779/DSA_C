#include <stdio.h>

#define MAX_SIZE 10

// Function to multiply two matrices
void matrix_multiply(int mat1[][MAX_SIZE], int mat2[][MAX_SIZE], int res[][MAX_SIZE], int row1, int col1, int row2, int col2) {
    int i, j, k;
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            res[i][j] = 0;
            for (k = 0; k < col1; k++) {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to transpose a matrix
void matrix_transpose(int mat[][MAX_SIZE], int res[][MAX_SIZE], int row, int col) {
    int i, j;
    for (i = 0; i < col; i++) {
        for (j = 0; j < row; j++) {
            res[i][j] = mat[j][i];
        }
    }
}

int main() {
    int mat1[MAX_SIZE][MAX_SIZE];
    int mat2[MAX_SIZE][MAX_SIZE];
    int result[MAX_SIZE][MAX_SIZE] = { 0 };
    int transpose[MAX_SIZE][MAX_SIZE] = { 0 };
    int row1, col1, row2, col2;
    int i, j;

    // Taking input for the first matrix
    printf("Enter the number of rows and columns of the first matrix:\n");
    scanf("%d %d", &row1, &col1);
    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Taking input for the second matrix
    printf("Enter the number of rows and columns of the second matrix:\n");
    scanf("%d %d", &row2, &col2);
    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < row2; i++) {
        for (j = 0; j < col2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Multiplication operation
    if (col1 == row2) {
        matrix_multiply(mat1, mat2, result, row1, col1, row2, col2);

        // Displaying the result of multiplication operation
        printf("Multiplication Result:\n");
        for (i = 0; i < row1; i++) {
            for (j = 0; j < col2; j++) {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }
    else {
        printf("Error: The number of columns of the first matrix must be equal to the number of rows of the second matrix for multiplication.\n");
    }

    // Transpose operation
    matrix_transpose(mat1, transpose, row1, col1);

    // Displaying the result of transpose operation
    printf("Transpose Result:\n");
    for (i = 0; i < col1; i++) {
        for (j = 0; j < row1; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}