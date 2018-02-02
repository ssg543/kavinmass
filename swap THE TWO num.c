#include <stdio.h>
int main(void)
{
int i,j,temp;
printf("Enter the swap numbers:");
scanf("%d%d",&i,&j);
  {
temp=i;	
i=j;
j=temp;
  }
printf("The numbers are swaped :%d %d",i,j);
return 0;
}
