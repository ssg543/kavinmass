#include<stdio.h>
#include<string.h>
 
int main()
{
   char name[3000];
   int i;
   printf("Enter the string:");
   scanf("%s",name);
   i=strlen(name);
   name[i]='.';
   printf("The appended string is:%s",name);
 
   return 0;
}
