/*program to find wind chill factor
  t=temperature,v=wind velocity,wcf=wind chill factor
*/
#include<stdio.h>
#include<math.h>
int main()
{
  float t,v,wcf;
  printf("Enter the temperature :");
  scanf("%f",&t);
  printf("Enter the wind velocity :");
  scanf("%f",&v);
  wcf=35.74 + 0.6215*t + (0.4275*t) * pow(v,0.16);
  printf("wind chill factor is %f\n",wcf);
}
