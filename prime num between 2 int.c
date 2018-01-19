#include<stdio.h>
void main()
{
	int m1,m2,i,j,count=0;
	printf("Enter Range to enter the prime numbers");
	scanf("%d%d",&m1,&m2);
	for(i=m1+1;i<m2;i++)
	{
		for(j=i;j>0;j--)
		{
			if(i%j==0)
			count++;
		}
		if(count==2)
		printf("%d\t",i);
		count=0;
	}
}
