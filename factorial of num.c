#include<stdio.h>
int factorial(int n);
void main()

{
int m,f;
printf("Enter the number:");
scanf("%d",&m);
f=factorial(m);
printf("The factorial of anumberis %d",f);
}
int factorial(int m)
{
if(m==0)
return 1;
else
return m*factorial(m-1);
}
