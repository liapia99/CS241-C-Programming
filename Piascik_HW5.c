// This program is designed to do the addition and multiplication of two user input matricies. 
// Program: Piascik_HW5.c
// Purpose: To write a C program to perform the addition of two matrices.
//          To write a C program that uses functions to perform Multiplication of Two Matrices
//
// Author: Julia Piascik
// Course: CS-241-B C PROGRAMMING CONCEPTS 
// Term: Fall 2024
// Date: 10/22/2024

#include <stdio.h>

//Addition
void addition(int x, int y, int matrix_a[x][y], int matrix_b[x][y], int matrix_c[x][y]) {
    int i, j;
  
    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
            matrix_c[i][j] = matrix_a[i][j] + matrix_b[i][j];
        }
    }
}

//Multiply
void multiplication(int row1, int col1, int matrix_a[row1][col1], int row2, int col2, int matrix_b[row2][col2], int matrix_d[row1][col2]) {
    int i, j, k;
    
    
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            matrix_d[i][j] = 0;
        }
    }
    
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            for (k = 0; k < col1; k++) {
                matrix_d[i][j] += matrix_a[i][k] * matrix_b[k][j];
            }
        }
    }
}

int main() {
    int x1, y1, x2, y2;
    
    //Matrix Dimensions
    printf("Enter the number of rows in MATRIX A:\n");
    scanf("%d", &x1);
    printf("Enter the number of columns in MATRIX A:\n");
    scanf("%d", &y1);
    
    printf("Enter the number of rows in MATRIX B:\n");
    scanf("%d", &x2);
    printf("Enter the number of columns in MATRIX B:\n");
    scanf("%d", &y2);
    
    //Check 
    if (y1 != x2) {
        printf("Matrix multiplication is not possible.\n");
        return 1;
    }
    
    int matrix_a[x1][y1], matrix_b[x2][y2], matrix_c[x1][y1], matrix_d[x1][y2];
    
    int i, j;
    
    printf("Enter values for the first matrix (MATRIX A):\n");
    for (i = 0; i < x1; i++) {
        for (j = 0; j < y1; j++) {
            scanf("%d", &matrix_a[i][j]);
        }
    }
    printf("MATRIX A:\n");
    for (i = 0; i < x1; i++) {
        for (j = 0; j < y1; j++) {
            printf("%d ", matrix_a[i][j]);
        }
        printf("\n");  
    }
    printf("Enter values for the second matrix (MATRIX B):\n");
    for (i = 0; i < x2; i++) {
        for (j = 0; j < y2; j++) {
            scanf("%d", &matrix_b[i][j]);
        }
    }
    printf("MATRIX B:\n");
    for (i = 0; i < x2; i++) {
        for (j = 0; j < y2; j++) {
            printf("%d ", matrix_b[i][j]);
        }
        printf("\n");  
    }
    
    if (x1 == x2 && y1 == y2) {
        addition(x1, y1, matrix_a, matrix_b, matrix_c);
    
        printf("\nThe addition of MATRIX A and MATRIX B is:\n");
        for (i = 0; i < x1; i++) {
            for (j = 0; j < y1; j++) {
                printf("%d ", matrix_c[i][j]);
            }
            printf("\n");  
        }
    } else {
        printf("\nMatrix addition is not possible.\n");
    }

    multiplication(x1, y1, matrix_a, x2, y2, matrix_b, matrix_d);

    printf("\nThe multiplication of MATRIX A and MATRIX B is:\n");
    for (i = 0; i < x1; i++) {
        for (j = 0; j < y2; j++) {
            printf("%d ", matrix_d[i][j]);
        }
        printf("\n");  
    }

    return 0;
}
