#include<stdio.h>

int main(){

    int x[10], i,  t, n, *p;
    printf("Enter size of array:");
    scanf("%d", &n);
    printf("Enter the elements");
    for(i=0; i<n; i++){
        scanf("%d", &x[i]);
    }
    p=x;

    for(i=0; i<n/2; i++){
          t = *(p+i);
          *(p+i)=*(p+n-i-1);
           *(p+n-i-1)=t;
    }
for(i=0; i<n; i++){
        printf("\n%d\n", *(p + i));
    }
    return 0;
}