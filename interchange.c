/*program to interchange the values of a and b
input a=k,b=m
output a=m,b=k
*/
#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter the numbers :");
  scanf("%d%d",&a,&b);
  c=a+b;
  b=c-b;
  a=c-b;
  printf("a=%d",a);
  printf("b=%d",b);
}
