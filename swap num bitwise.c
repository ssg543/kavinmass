#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the number:");
    scanf("%d%d",&a,&b);
    a^=b;
    b^=a;
    a^=b;
    printf("The swapped number:%d\t%d",a,b);
}
