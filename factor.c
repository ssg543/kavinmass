#include<stdio.h>
void main()
{
	int j,n;
	printf("Enter the number:");
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		if(n%j==0)
		{
			printf("%d",j);
		}
	}
}
