#include<stdio.h>
void main()
{
    int b;
    printf("Enter the number: ");
    scanf("%d",&b);
    if(b%13==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
