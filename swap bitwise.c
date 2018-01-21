#include <stdio.h>
int main() {
    int i,k;
    printf("Enter the value of i and k :");
    scanf("%d%d",&i,&k);
    printf(" value of i=%d k=%d before swapping", i, k);

    i = i ^ k;
    k = i ^ k;
    i = i ^ k;
    printf("\nvalue of i=%d k=%d after swapping", i, k);

    return 0;
}
