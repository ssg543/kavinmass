#include<stdio.h>
void main() {
   int a,r=0,m,s;
   printf("Enter any number:");
   scanf("%d",&a);
   m=a;
   while(m>0)
   {
       s=m%10;
       r=r+s*s*s;
       m=m/10;
   }
   if(a==r)
   {
printf("Yes");
}
else
{
    printf("No");
}
}
