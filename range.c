/*Program to find the range of a set of numbers entered through the keyboard.
  Range is the difference between the smallest and biggest number in the list.
*/
#include<stdio.h>
int main()
{
  int n,i,c,small,big,range;
  printf("Enter how many numbers : ");
  scanf("%d",&n);
  printf("Enter the set of numbers : ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&c);
    if(i==0)
    {
      big=c;
      small=c;
    }
    else
    {
      if(big<c)
      {
        big=c;
      }
      if(small>c)
      {
        small=c;
      }
    }
  }
  range = big - small;
  printf("Range = %d\n",range);
}
