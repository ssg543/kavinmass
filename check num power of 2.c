#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    clrscr();
    printf("Enter the number:");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("Yes,power of 2");
    }
    else
    {
        printf("No,not a power of 2");
    }
    getch();
}
