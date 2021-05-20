/*program to determine the largest among three numbers
  by using conditional operartor */
#include<stdio.h>
int main()
{
  float a,b,c,x;
  printf("Enter three numbers :");
  scanf("%f%f%f",&a,&b,&c);
  x = (a>b)?((a>c)?a:c):((b>c)?b:c);
  printf("%f\n",x);
}
