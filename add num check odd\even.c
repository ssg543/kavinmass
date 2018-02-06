#include<stdio.h>
void main()
{
    int i,j,k;
    printf("Enter the elements :");
    scanf("%d",&i,&j);
    k=i+j;
    if(k%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    
}
