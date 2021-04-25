/*program to find whether the area of a rectangle
  is greater than its perimeter
  l=length,b=breadth,p=perimeter,a=area
*/
#include<stdio.h>
int main()
{
  float l,b,p,a;
  printf("Enter the length and breadth of rectangle :");
  scanf("%f%f",&l,&b);
  p=(2*l)+(2*b);
  a=l*b;
  if(a>p)
  {
    printf("Area of the rectangle %f is greater than its perimeter %f\n",a,p);
  }
  else
  {
    printf("Area of the rectangle %f is not greater than its perimeter %f\n",a,p);
  }
}
