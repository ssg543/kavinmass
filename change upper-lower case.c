#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[100];
int i,l,b[100];
clrscr();
printf("Enter the string:");
scanf("%s",&s);
l=strlen(s);
for(i=0;i<l;i++)
{
b[i]=s[i];
}
for(i=0;i<l;i++)
{
if((b[i]>=97)&&(b[i]<=122))
{
b[i]=b[i]-32;
s[i]=b[i];
}
else if((b[i]>=65)&&(b[i]<=90))
{
b[i]=b[i]+32;
s[i]=b[i];
}
}
printf("The output string is: %s",s);
getch();
} 
