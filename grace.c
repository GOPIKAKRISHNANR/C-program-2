/*Program to find the grace mark of student by using switch.User should enter the
class obtained by the student and the number of subjects he has failed.
First class :if failed subjects>3,no grace; otherwise 5 marks per subject.
Second class :if failed subjects>2,no grace;othewise 4 marks per subject.
Third class :if failed subjects>1,no grace;Otherwise 5 marks per subject.
*/
#include<stdio.h>
int main()
{
  int fail,choice,n=10,m;
  printf("1.First class\n2.Second class\n3.Third class\n");
  printf("Enter your choice : ");
  scanf("%d",&choice);
  if(choice>0 && choice<=3)
  {
    printf("Enter the no.of subjects failed : ");
    scanf("%d",&fail);
    switch(choice)
    {
      case 1:
        if(fail>=0 && fail<=3)
        {
          m = n * 5;
          printf("Grace mark of the student is %d\n",m);
        }
        else
        {
          printf("The student does not get any grace\n");
        }
        break;
      case 2:
        if(fail>=0 && fail<=2)
        {
          m = n * 4;
          printf("Grace mark of the student is %d\n",m);
        }
        else
        {
          printf("The student does not get any grace\n");
        }
        break;
      case 3:
        if(fail>=0 && fail<=1)
        {
          m = n * 5;
          printf("Grace mark of the student is %d\n",m);
        }
        else
        {
          printf("The student does not get any grace\n");
        }
        break;
    }
  }
  else
  {
    printf("Invalid choice\n");
  }
}
