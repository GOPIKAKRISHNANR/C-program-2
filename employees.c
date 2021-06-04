/*Program to calculate over time pay of 10 employees.
  Over time is paid at the rate of Rs.12.00 per hour
  for every hour worked above 40 hours.Assume that
  employees do not work for a fractional part of an hour.
*/
#include<stdio.h>
int main()
{
  float count,hours,overtime,overtimepay;
  for(count=1;count<=10;count++)
  {
    printf("Enter the working hour of employee no.%2f : ",count);
    scanf("%f",&hours);
    if(hours>40)
    {
      overtime = hours - 40;
      overtimepay = overtime * 12.00;
      printf("employee no.%f over time pay is %2f\n",count,overtimepay);
    }
    else
    {
      printf("You have to work for more than 40 hours for over time pay\n");
    }
  }
}
