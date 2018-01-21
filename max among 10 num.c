#include<stdio.h>
int main()
{
int a[10],i,j,k;
printf("Enter the series :");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
for(j=i+1;j<10;j++)
{
if(a[i]>a[j])
{
k=a[i];
a[i]=a[j];
a[j]=k;
}
}
}
printf("\nThe maximum number is:%d",a[9]);
return 0;
}
