#include<stdio.h>
void main()
{
	int l,b,h,a,v;
	printf("Enter the Length:");
	scanf("%d",&l);
	printf("Enter the Breadth:");
	scanf("%d",&b);
	printf("Enter the Height:");
	scanf("%d",&h);
	a=2*(l*b)+2*(b*h)+2*(h*l);
	printf("The Total Surface Area of Cuboid is %d",a);
	v=l*b*h;
	printf("\nVolume of Cuboid is %d",v);
	
}
