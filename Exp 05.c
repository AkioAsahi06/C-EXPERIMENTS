#include <stdio.h>
#define SIZE 100

void sortArray(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void searchArray(int arr[], int n, int key) {
    int i, found = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("element %d found at position %d\n", key, i + 1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("element %d not found\n", key);
    }
}

void matrixAddition(int a[10][10], int b[10][10], int r, int c) {
    int i, j;
    printf("Matrix addition:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
}

void matrixSubtraction(int a[10][10], int b[10][10], int r, int c) {
    int i, j;
    printf("Matrix subtraction:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", a[i][j] - b[i][j]);
        }
        printf("\n");
    }
}

void matrixMultiplication(int a[10][10], int b[10][10], int r1, int c1, int r2, int c2) {
    if (c1 != r2) {
        printf("Matrix Multiplication not possible\n");
        return;
    }

    int res[10][10] = {0}, i, j, k;
    printf("Matrix Multiplication:\n");

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            res[i][j] = 0;
            for (k = 0; k < c1; k++) {
                res[i][j] += a[i][k] * b[k][j];
            }
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
}
