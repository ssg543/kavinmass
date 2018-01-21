#include<stdio.h>
void main()
{
    int a,b,c,d,m,n;
    printf("Enter  first time in hours and minutes:");
    scanf("%d%d",&a,&c);
    printf("Enter second time in hours and minutes:");
    scanf("%d%d",&b,&d);
    m=a-b;
    n=c-d;
    printf("The difference is %d%d\t",m,n);
    
}
