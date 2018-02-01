#include<stdio.h>
void main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("%d",a);
    
    }
    else
    {
        a=a-1;
        printf("%d",a);
    }
    
}
