/*program to check whether the point lies
  inside the circle,outside the circle or on the circle
*/
#include<stdio.h>
#include<math.h>
int main()
{
  float x,y,h,k,r,d;
  printf("Enter the cenral coordinates of circle (x,y) :");
  scanf("%f%f",&x,&y);
  printf("Enter a point to determine its position(h,k) :");
  scanf("%f%f",&h,&k);
  printf("Enter the radius of the circle  :");
  scanf("%f",&r);
  d=sqrt(pow((h-x),2)+pow((k-y),2));//distance from(h,k) to (x,y)
  if(d>r)
  {
    printf("The point is outside the circle\n");
  }
  else if(d<r)
  {
    printf("The point is inside the circle\n");
  }
  else
  {
    printf("The point is on the circle\n");
  }
}
