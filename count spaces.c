#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    int i,count=0,b;
    printf("Enter the string:");
    gets(a);
    b=strlen(a);
    for(i=0;i<=b;i++)
    {
    if(a[i]==' ')
    {
        count=count+1;
    }
    }
    printf("The total no of space is: %d",count);
}
