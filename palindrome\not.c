#include<stdio.h>
#include<string.h>
void main()
{
char a[1000],b[1000];
printf("enter the character:");
scanf("%s",&a);
strcpy(b,a);
strrev(b);
if((a,b)==0)
{
    printf("palindrome");
}
else
{
    printf("not palindrome");
}
}
