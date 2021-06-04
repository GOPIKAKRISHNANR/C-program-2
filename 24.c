/*program to print 24 hours of a date with suitable suffixes
  sush as AM,PM,Noon,Midnight
*/
#include<stdio.h>
int main()
{
  int i;
  printf("12:00 - Midnight\n\n");
  for(i=1;i<12;i++)
  {
    printf("%02d:00 - AM\n",i);
  }
  printf("\n12:00 - Noon\n\n");
  for(i=1;i<12;i++)
  {
    printf("%02d:00 - PM\n",i);
  }
}
