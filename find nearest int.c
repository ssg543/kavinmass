#include<stdio.h>
int main(void)
{
    float n,d;
    int i;
    printf("Enter the nubmer:");
    scanf("%f",&n);
    i=n;
    d=n-i;
    if((d>=0.5)&&(d<0.9))
    {
        i+=1;
    }
    if((d>0.1)&&(d<0.5))
    {
        i+=0;
    }
    printf("The nearest integer greater round off is %d",i);
    return 0;
}
