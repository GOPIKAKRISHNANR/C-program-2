/*program to check whether a year is leap year or not
  by using logical operaters && and ||
*/
#include<stdio.h>
int main()
{
  int y;
  printf("Enter the year :");
  scanf("%d",&y);
  if(y%100==0 && y%400==0 || y%4==0 && y%100!=0)
  {
    printf("%d is a leap year\n",y);
  }
  else
  {
    printf("%d is not a leap year\n",y);
  }
}
