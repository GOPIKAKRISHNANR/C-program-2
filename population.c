/*?:Population of a town today is 100000.The Population
has increased steadily at the rate of 10% per year for the
last 10 years.Write a program to determine the population at
the end of each year in the last decade*/
#include<stdio.h>
int main()
{
  int y,population=100000;
  for(y=10;y>0;y--)
  {
    population = (population*100)/110;
    printf("%dth population is %d\n",y,population);
  }
}
