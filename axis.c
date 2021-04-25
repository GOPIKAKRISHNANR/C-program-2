/*program to check (x,y)point lies on
  x-axis,y-axis or on origin
*/
#include<stdio.h>
int main()
{
  float x,y;
  printf("Enter the point (x,y) :");
  scanf("%f%f",&x,&y);
  if(x==0 && y==0)
  {
    printf("The point lies on the origin\n");
  }
  else if(x==0)//x=0,y>0 lie on y-axis
  {
    printf("The point lies on y-axis\n");
  }
  else if(y==0)//y=0,x>0 lie on x-axis
  {
    printf("The point lies on x-axis\n");
  }
  else//x>0,y>0
  {
    printf("Point does not lie on any axis\n");
  }
}
