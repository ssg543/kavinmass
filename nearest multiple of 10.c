#include<stdio.h>
void main()
{
    int n,a,b,c;
    printf("Enter the number:");
    scanf("%d",&n);
    {
    a=n%10;
    b=10-a;
    c=n+b;
    }
    printf("The nearest multiple of 10 is:%d",c);
}
