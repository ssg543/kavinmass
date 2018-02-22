#include<string.h>
void main()
{
	char b[500];
	int i,j,m,count=0;
	printf("Enter the String:");
	scanf("%s",b);
	m=strlen(b);
	for(i=0;i<m;i++)
	{
		for(j=i+1;j<=m;j++)
		{
			if(b[i]==b[j])
			{
				count++;
			}
		}
	}
	if(count==0)
	{
		printf("\nIsogram");
	}
	else
	{
		printf("\nNot a Isogram");
	}
}
