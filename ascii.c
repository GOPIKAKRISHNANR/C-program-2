/*program to print all ASCII values and their equalent
  characters 
*/
#include<stdio.h>
int main()
{
  int i;
  for(i=33;i<127;i++)
  {
    printf("%3d = %c\n",i,i);
  }
}
