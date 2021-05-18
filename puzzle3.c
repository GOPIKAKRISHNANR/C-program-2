#include<stdio.h>
int main()
{
  int i,n;
  for(i=0;i<5;i++)
  {
    for(n=65;n<=65+i;n++)
    {
      printf("%c\t",n);
    }
    printf("\n");
  }
}
