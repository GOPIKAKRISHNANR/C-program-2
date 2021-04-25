/*program to check the points (x1,y1),(x2,y2),(x3,y3)
  are lie on one straight line
*/
#include<stdio.h>
int main()
{
  float x1,y1,x2,y2,x3,y3,m,n;
  printf("Enter the points (x1,y1) :");
  scanf("%f%f",&x1,&y1);
  printf("Enter the points (x2,y2) :");
  scanf("%f%f",&x2,&y2);
  printf("Enter the points (x3,y3) :");
  scanf("%f%f",&x3,&y3);
  m=(y2-y1)/(x2-x1); //finding slope of first two points
  n=(y3-y2)/(x3-x2); //finding slope of second and third point
  if(m==n)
  {
    printf("All three points lie on one straight line\n");
  }
  else
  {
    printf("The points do not lie on the straight line\n");
  }
}
