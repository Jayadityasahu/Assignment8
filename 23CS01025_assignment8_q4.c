#include<stdio.h>

int main() {
    int x[10], i, j, N, *P, count;
    printf("Enter array size: ");
    scanf("%d", &N);

    printf("Enter array elements:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &x[i]);
    }

    P = x;
    for (i = 0; i < N; i++) {
        count = 1;
        for (j = i + 1; j < N; j++) {
            if (*(P + i) == *(P + j)) {
                count++;
            }
        }
        if (count > 1) {
            printf("%d \n", *(P + i));
            for (j = i + 1; j < N; j++) {
                if (*(P + i) == *(P + j)) {
                    i++;
                }
            }
        }
    }
    return 0;
}
