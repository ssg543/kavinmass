#include<stdio.h>
void main()
{
    char a[100];
    int n,i;
    printf("Enter the character:");
    scanf("%s",&a);
    n=strlen(a);
    i=n/2;
    a[i]='*';
    printf("The change in character:%s",a);
}
