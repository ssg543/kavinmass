#include <stdio.h>
int main()
{
	int num,j,count=0;
	printf("Enter the number: ");
	scanf("%d",&num);
	for(j=2;j<num;j++)
	{
		if(num%j==0)
		count++;

	}
	if(count==0)
	printf("NO");
	else
	printf("YES");
	return 0;
}
