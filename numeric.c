#include<stdio.h>
void main()
{
    char value;
    printf("Enter the number ");
    scanf("%s",&value);
    if(value>='0'&&value<='9')
    {
        printf("yes is numeric",value);
        
}
else
{
    printf("no is not numeric",value);
}
}
