#include<stdio.h>
void main()
{
    int n1,n2,n;
    printf("Enter the number:");
    scanf("%d%d",&n1,&n2);
    n=n1*n2;
    printf("The product of number:%d",n);
    if(n%2==0)
    {
        printf("\nEven");
    
    }
    else
    {
        printf("\nodd");
    }
}
