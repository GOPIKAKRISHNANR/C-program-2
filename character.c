/*program to check whether a character is
  capital letter,small letter,a digit or
  special symbol
*/
#include<stdio.h>
int main()
{
  char c;
  printf("Enter the character :");
  c = getchar();
  if(c>=65 && c<=90)
  {
    printf("Capital letter\n");
  }
  else if(c>=97 && c<=122)
  {
    printf("Small letter\n");
  }
  else if(c>=48 && c<=57)
  {
    printf("A Digit\n");
  }
  else if(c>=0 && c<=127)
  {
    printf("Special symbol\n");
  }
}
