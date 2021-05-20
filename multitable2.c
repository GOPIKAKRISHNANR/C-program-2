//program to find the first 20 multiples of a number 
#include<stdio.h>
int main()
{
  int n,i,d;
  printf("Enter the number :");
  scanf("%d",&n);
  for(i=1;i<=20;i++)
  {
    d = i*n;
    printf("%d * %d = %d\n",i,n,d);
  }
}
