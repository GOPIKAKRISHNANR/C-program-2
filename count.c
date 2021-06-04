 /*Write a program to enter numbers till the user wants.
  At the end,it should display the count of positive,
  negative and zeros entered.
*/
#include<stdio.h>
int main()
{
  int limit,n,positive=0,negative=0,zero=0,i;
  printf("Enter how many numbers do you want : ");
  scanf("%d",&limit);
  if(limit>0)
  {
    printf("Enter %d numbers : ",limit);
    while(limit>0)
    {
      scanf("%d",&n);
      if(n>0)
      {
        positive++;
      }
      else if(n<0)
      {
        negative++;
      }
      else
      {
        zero++;
      }
      limit--;
    }
    printf("Positive numbers :%d\n",positive);
    printf("Negative numbers :%d\n",negative);
    printf("No.of Zeros :%d\n",zero);
  }
  else
  {
    printf("Please enter numbers greater than zero\n");
  }
}
