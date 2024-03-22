#include <stdio.h>

void matrixMultipl(int arr1[10][10], int arr2[10][10], int res[][10], int r1, int c1, int r2, int c2) {
    if (c1 != r2) {
        printf("Matrix multiplication is not possible.\n");
        return;
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            res[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                res[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
}

int main() {
    int r1, c1, r2, c2;
    printf("Enter the dimensions of the first matrix : ");
    scanf("%d%d", &r1, &c1);


    printf("Enter the dimensions of the second matrix : ");
    scanf("%d%d", &r2, &c2);

    

    int arr1[10][10], arr2[10][10], res[10][10];

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < r1 ; i++) {
        for (int j = 0; j < c1 ; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2 ; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

     matrixMultipl(arr1, arr2, res, r1, c1, r2, c2);

    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}
