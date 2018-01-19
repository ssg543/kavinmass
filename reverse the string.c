#include<stdio.h>
#include<string.h>
 int main()
 {
   char str[100], temp;
   int n,m=0;
   printf("\nEnter the string :");
   gets(str);
  n=0;
   m=strlen(str)-1;
 while(n<m) 
   {
      temp=str[n];
      str[n]=str[m];
      str[m]=temp;
      n++;
      m--;
   }
 printf("\nReverse string is :%s",str);
 return (0);
}
