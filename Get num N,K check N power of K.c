#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    clrscr();
    printf("Enter the two number:");
    scanf("%d%d",&a,&b);
    if(a%b==0)
    {
        printf("Yes,power");
    }
    else
    {
        printf("No,not a power");
    }
}
