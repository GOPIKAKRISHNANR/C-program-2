/*program to check the cost price and selling price of a seller
  and check whether profit or incurred loss
  how much profit he made or loss he incurred
  c=cost price,s=selling price,p=profit,l=incurred loss
*/
#include<stdio.h>
int main()
{
  float c,s,p,l;
  printf("Enter the cost price and selling price :");
  scanf("%f%f",&c,&s);
  if(c<s)
  {
    printf("PROFIT\n");
    p=s-c;
    printf("profit is %f\n",p);
  }
  else if(c>s)
  {
    printf("INCURRED LOSS\n");
    l=c-s;
    printf("incurred loss is %f\n",l);
  }
}
