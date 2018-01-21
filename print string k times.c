#include<stdio.h>
void main()
{
char s[10];
int i,k;
printf("the string is :");
scanf("%s",&s);
scanf("%d",&k);
printf("the k value is%d",k);
for(i=0;i<k;i++)
{
printf("%s",s);
}
}
