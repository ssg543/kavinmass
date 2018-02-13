#include<stdio.h>
int main(void)
{
    int a,b,m,i;
    printf("Enter the numbers:");
    scanf("%d%d",&a,&b);
    m=a*b;
    printf("Product of number:%d",m);
    for(i = 0; i <= a; i++)
    {
        if (m == i * i)
        {
            printf("\nYES");
            return 0;
        }
    }
    printf("\nNO");
    return 0;
}
