#include<stdio.h>
void main()
{
    int a,b,temp;
    printf("Enter the number:");
    scanf("%d%d",&a,&b);
    {
        temp=a;
        a=b;
        b=temp;
    }
    printf("The swapped number%d %d",a,b);
}
