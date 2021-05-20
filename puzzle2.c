#include<stdio.h>
int main()
{
  int n=7,i,j,k;
  for(i=0;i<4;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("&\t");
    }
    printf("\n");
    for(k=0;k<=i;k++)
    {
      printf("\t");
    }
    n-=2;
  }
  printf("\n");
}
