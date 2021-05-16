/*program to check whether a triangle is isosceles,
  equilateral or right angled triangle
*/
#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter three sides of a triangle :");
  scanf("%d%d%d",&a,&b,&c);
  if(a==b && b==c && a==c)
  {
    printf("It is an Equilateral triangle\n");
  }
  else if(a==b || b==c || a==c)
  {
    printf("It is an Isosceles triangle\n");
  }
  else if(a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b )
  {
    printf("It is a Right angled triangle\n");
  }
}
