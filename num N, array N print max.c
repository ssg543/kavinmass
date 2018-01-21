#include<stdio.h>
#include<conio.h>
void main()
{
int array[100], maximum, size, c, loc = 1;
 
  printf("enter the number of elements in array\n");
  scanf("%d", &size);
 
  printf("Enter %d integers\n", size);
{
  for (c = 0; c < size; c++)
    scanf("%d", &array[c]);
 
  maximum = array[0];
 
  for (c = 1; c < size; c++)
  {
    if (array[c] > maximum)
    
    {
       maximum  = array[c];
       loc = c+1;
    }
  }
 }
  printf("Maximum element is present at thelocation %d and it's value is %d.\n", loc, maximum);

}
