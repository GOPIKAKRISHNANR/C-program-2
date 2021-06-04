/*program to print the following using nested loop:
                    &
                  &   &
                &       &
              & & & & & & &
*/
#include<stdio.h>
int main()
{
  int n,i,j,k;
  printf("Enter the number of rows : ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    for(j=n-1;j>i;j--)
    {
    printf("\t");
    }
    if(i==0)
    {
      printf("&");
    }
    else if(i==n-1)
    {
      for(i=0;i<2*n-1;i++)
      {
        printf("&\t");
      }
    }
    else
    {
      printf("&");
      for(k=0;k<2*i;k++)
      {
        printf("\t");
      }
      printf("&");
    }
    printf("\n");
  }
}
