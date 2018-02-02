#include <stdio.h>
int main()
{
    int i,n,m1=0,m2=1,nextTerm;
   printf("Enter the number of terms: ");
    scanf("%d", &n);
  printf("Fibonacci Series: ");
  for (i=1;i<=n;++i)
    {
        printf("%d",m1);
        nextTerm=m1+m2;
        m1=m2;
        m2=nextTerm;
    }
    return 0;
}
