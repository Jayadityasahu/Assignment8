#include <stdio.h>

void rightRotateMatrix(int *mat, int rows, int cols, int n) {
    int temp, i, j, k;
    for (k = 0; k < n; k++) {
        temp = *((mat + rows - 1) * cols + cols - 1);
        for (i = rows - 1; i >= 0; i--) {
            for (j = cols - 1; j >= 0; j--) {
                if (j == 0) {
                    if (i != 0) {
                        *((mat + i) * cols + j) = *((mat + i - 1) * cols + cols - 1);
                    }
                } else {
                    *((mat + i) * cols + j) = *((mat + i) * cols + j - 1);
                }
            }
        }
        *((mat + 0) * cols + 1) = temp;
    }
}

void printMatrix(int *mat, int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", *((mat + i) * cols + j));
        }
        printf("\n");
    }
}

int main() {
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int n = 2; // Number of rotations
    int rows = 3, cols = 3;

    printf("Original matrix:\n");
    printMatrix(&mat[0][0], rows, cols);

    rightRotateMatrix(&mat[0][0], rows, cols, n);

    printf("\nMatrix after %d right rotations:\n", n);
    printMatrix(&mat[0][0], rows, cols);

    return 0;
}
