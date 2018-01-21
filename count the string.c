#include<stdio.h>
#include<string.h>
void main()
{
	int sum=0,a;
	char string[50];
  printf("Enter the string:");
  gets(string);
	a=strlen(string);
	for(int i=0;i<=a;i++)
	{
		if((string[i]>='a'&&string[i]<='z')||(string[i]>='A'&&string[i]<='Z'))
		{
		    sum=sum+1;
		}
	}
	printf("The number of characters in the line is: %d\n",sum);
}
