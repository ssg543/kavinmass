#include <stdio.h>
int main(void) 
{
char a[70];
int count=0,i;
printf("Enter the string:");
scanf("%[^\n]s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>='0'&&a[i]<='9')
count++;
}
printf("The number of special character used :%d",count);
return 0;
}
