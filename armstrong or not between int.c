#include <stdio.h>
int main()
{
  int m1, m2, i, t, n, c,r;
  scanf("%d %d", &m1, &m2);
  for(i=m1+1; i<m2; ++i)
  {
      t=i;
      n=0;
      while(t!=0)
      {
          r=(t%10);
c=r*r*r;
          n=n+c;
          t/=10;
      }
      if(i==n)
      {
          printf("%d ",i);
      }
  }
  return 0;
}
