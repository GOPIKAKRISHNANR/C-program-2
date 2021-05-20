//program to check all armstrong numbers between 1 and 500
#include<stdio.h>
#include<math.h>
int main()
{
  int n,l=0,d,sum=0,ncopy,ncopy2,ncopy3;
  for(n=2;n<500;n++)
  {
    ncopy=n;
    ncopy2=n;
    ncopy3=n;
    l=0;
    sum=0;
    while(ncopy>0)
    {
      ncopy=ncopy/10;
      l++;
    }
    while(ncopy2>0)
    {
      d=ncopy2%10;
      sum=sum+pow(d,l);
      ncopy2=ncopy2/10;
    }
    if(sum==ncopy3)
    {
        printf("%d\n",ncopy3);
    }
  }
}
