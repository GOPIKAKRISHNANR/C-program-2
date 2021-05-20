/*program to find the value of one number raised to the
  power of another number
  a,b are two numbers entered through the keyboard */
#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,p;
  printf("Enter the two numbers :");
  scanf("%d%d",&a,&b);
  p = pow(a,b);
  printf("%d\n",p);
}
