#include<stdio.h>
int main()
{
	char a[100];
	int b=0,c=1,i;
	printf("Enter the lines:");
	gets(a);
	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]=='.')
		b=++c;
	}
	printf("The number lines is :%d",b);
	return 0;
}
