#include <stdio.h>
int main(void) 
{
char a[1000];
int count=0,i;
printf("Enter the string:");
scanf("%[^\n]s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>='0'&&a[i]<='9')
count++;
}
printf("The number numeric character is :%d",count);
return 0;
}
