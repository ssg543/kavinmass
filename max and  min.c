#include <stdio.h>
void main()
{
int arr[100];
int j, max, min, size;
printf("Enter size of the array: ");
scanf("%d", &size);
printf("Enter elements in the array: ");
for(j=0; j<size; j++)
{
scanf("%d", &arr[j]);
}
max = arr[0];
min = arr[0];
for(j=1; j<size; j++)
{
if(arr[j] > max)
{
max = arr[j];
}
if(arr[j] < min)
{
min = arr[j];
}
}
printf("The minimum number is:%d\n", min);
printf("The maximum number is:%d\n", max);
}
