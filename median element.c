#include<stdio.h>
void main()
{
int n,a[10],i,sum=0;
printf("Enter how many numbers \n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
int median=sum/n;
printf("median is :%d\n",median);
 }
