/*program to calculate body mass index(bmi)
  and reports the bmi category
  bmi = weight(w)/(height*height(h))
*/
#include<stdio.h>
int main()
{
  float h,w,bmi;
  printf("Enter the height in meter and weight in kg :");
  scanf("%f%f",&h,&w);
  bmi = w / (h * h);
  printf("Body mass index is %f\n",bmi);
  if(bmi<15)
  {
    printf("bmi category is Starvation\n");
  }
  else if(bmi>=15.1 && bmi<=17.5)
  {
    printf("bmi category is Anorexic\n");
  }
  else if(bmi>=17.6 && bmi<=18.5)
  {
    printf("bmi category is Underweight\n");
  }
  else if(bmi>=18.6 && bmi<=24.9)
  {
    printf("bmi category is Ideal\n");
  }
  else if(bmi>=25 && bmi<=25.9)
  {
    printf("bmi category is Over weight\n");
  }
  else if(bmi>=30 && bmi<=30.9)
  {
    printf("bmi category is Obese\n");
  }
  else if(bmi>=40)
  {
    printf("bmi category is Morbidly Obese\n");
  }
}
