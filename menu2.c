/*Write a menu driven program which has the following options:
    1.Factorial of a number    2.Prime or not
    3.Odd or even              4.Exit
  One a menu item is selected the appropriate action should be
  taken and once this action is finished,the menu should reappear.
  Unless the user selects the "Exit"option,the program should continue to run.
*/
#include<stdio.h>
int main()
{
  int n,choice,i=1,fact=1,flag=0;
  do
  {
    printf("1.Factorial of a number\n2.Prime or not\n3.Odd or even\n4.Exit\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);
    if(choice>0 && choice<4)
    {
      printf("Enter the number : ");
      scanf("%d",&n);
    }
    switch(choice)
    {
      case 1:
        for(i=1;i<=n;i++)
        {
          fact=fact*i;
          printf("%d",i);
          if(i!=n)
          {
            printf(" x ");
          }
        }
        printf(" = %d\n",fact);
        break;
      case 2:
        for(i=2;i<=n/2;i++)
        {
          if(n%i==0)
          {
            flag=1;
            break;
          }
        }
        if(flag==0 && n>=2)
        {
          printf("%d is a prime number\n",n);
        }
        else
        {
          printf("%d is not a prime number\n",n);
        }
        break;
      case 3:
        if(n%2==0)
        {
          printf("%d is an even number\n",n);
        }
        else
        {
          printf("%d is an odd number\n",n);
        }
        break;
      case 4:
        printf("Exit\n");
        break;
      default:
        printf("Invalid choice\n");
      }
      printf("**************\n");
  }while(choice!=4);
    printf("\n");
}
