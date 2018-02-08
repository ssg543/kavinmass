#include<stdio.h>
void main()
{
int base,ex,result=1;
printf("Enter the number:");
scanf("%d",&base);
scanf("%d",&ex);
while(ex!=0)
{
result=result*base;
--ex;
}
printf("%d",result);
}
