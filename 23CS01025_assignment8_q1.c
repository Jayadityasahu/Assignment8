#include<stdio.h>

void circshi(int *x, int *y, int *z){
    int a = *x, b = *y, c = *z;
    *x = c;
    *y = a;
    *z = b;
}

int main(){
    int x, y, z;
    printf("Enter x, y, z: ");
    scanf("%d%d%d", &x, &y, &z);

    circshi(&x, &y, &z);

    printf("x=%d, y=%d, z=%d\n", x, y, z);

    return 0;
}
