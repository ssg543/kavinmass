#include<stdio.h>
void main()
{
    int l,b,h,r;
    float pi=3.14;
    int a,d;
    printf("Enter the value of length,breadth,height,radius:");
    scanf("%d%d%d%d",&l,&b,&h,&r);
    a=pi*r*r;
    printf("The total surface area:%d",a);
    d=l*b*h;
    printf("The volume of cuboid:%d",d);
    
}
