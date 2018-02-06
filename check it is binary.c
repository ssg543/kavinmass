#include <stdio.h>
#include<string.h>
int main()
{   
    char a[20];
    int b,i=0,j=0,count=0;
    printf("Enter the number:");
    scanf("%s",a);
    b=strlen(a);
    {   do
         {
            if(a[i]=='0'||a[i]=='1')
            {
               j=0;
            }
             
             else
             count++;
             i++;
         }while(i<b);
    }
    if(count==b)
    printf("no");
    else
    printf("yes");
}
