/*program to find absolute value of a number
  Absolute value of a number is the distance from zero to that number
  it is always positive
*/
#include<stdio.h>
int main()
{
  float a,b;
  printf("Enter the number :");
  scanf("%f",&a);
  if(a<0)
  {
    b = -1 * a;
    printf("Absolute value of %f is %f\n",a,b);
  }
  else
  {
    printf("Absolute value of %f is %f\n",a,a);
  }
}
