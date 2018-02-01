#include<stdio.h>
void main()
{
    int n,a,b=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0)
    {
     a=n%10;
     b=b+a;
     n=n/10;
     }
     printf("The sum number:%d",b);
}
