#include <stdio.h>
int main(void) 
{
int a[1000],i,j,t,lim;
printf("Enter the limit :");
scanf("%d",&lim);
printf("\nEnter the series:");
for(i=0;i<lim;i++)
scanf("%d",&a[i]);
for(i=0;i<lim;i++)
{
for(j=0;j<lim;j++)
{
if(a[i]>a[j])
{
t=a[j];
a[j]=a[i];
a[i]=t;
}	
}
}
printf("\n the result is :%d\t",a[lim%2]);
return 0;
}
