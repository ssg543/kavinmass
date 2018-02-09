#include<stdio.h>
void main()
{
	int a,j,count=0;
	printf("Enter the number:");
	scanf("%d",&a);
	for(j=1;j<=a;j++)
	{
		if(a%j==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("Prime Number");
	}
	else
	{
		printf("Not a Prime Number");
	}
}
