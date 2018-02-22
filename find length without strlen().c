#include <stdio.h>
int main(void)
{
	char var[20];
	int m;
	printf("Enter the string:");
	scanf("%s",&var);
	for(m=0;var[m]!='\0';m++);
	printf("\nThe length of string:%d",m);           //with out using strlen()//
	return 0;
}
