#include<stdio.h>
void main()
{
    int n,m,s=0,r=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0)
    {
        m=n%10;
         s=s*10+m;
        n=n/10;
    }
    while(s>0)
    {
        r=0;
        r=s%10;
        printf("\t%d",r);
        s=s/10;
}
}
