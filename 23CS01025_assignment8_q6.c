#include<stdio.h>
#include<string.h>

int main() {
    int n, m, i, j;
    printf("Enter the length of first string: ");
    scanf("%d", &n);
    char x[n];
    printf("Enter the string: ");
    getchar(); 
    for (i = 0; i < n; i++) {
        scanf("%c", &x[i]);
    }
    x[n] = '\0'; 

    printf("Enter the length of second string: ");
    scanf("%d", &m);
    char y[m];
    printf("Enter the string: ");
    getchar(); 
    for (j = 0; j < m; j++) {
        scanf("%c", &y[j]);
    }
    y[m] = '\0'; 
    strcat(x, y);

    printf("%s", x);

    return 0;
}
