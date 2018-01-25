#include<stdio.h>
void main()
{
    int a[10],i,k,sum=0,avg;
    printf("Enter the range: ");
    scanf("%d",&k);
    printf("Enter the numbers:");
    for(i=0;i<k;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {
        sum=sum+a[i];
        
        }
        avg=sum/k;
    
    printf("The average of number:%d",avg);
}
