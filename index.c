#include<stdio.h>
void main()
{
int a[10],j,n;
printf("Enter the array size:");
scanf("%d",&n);
printf("The array elements are:");
for(j=0;j<n;j++)
{
scanf("%d",&a[j]);
}
for(j=0;j<n;j++)
{
printf("%d%d\n",a[j],j);
}
}
