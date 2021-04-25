/*program to check whether a triangle is valid or not
  Angles of triangle=a,b,c
  sum of angles,s=180  valid
  s!=180  not valid
*/
#include<stdio.h>
int main()
{
  int a,b,c,s;
  printf("Enter the three angles of triangle :");
  scanf("%d%d%d",&a,&b,&c);
  s=a+b+c;
  if(s==180)
  {
    printf("The Triangle is Valid\n");
  }
  else
  {
    printf("The Triangle is not Valid\n");
  }
}
