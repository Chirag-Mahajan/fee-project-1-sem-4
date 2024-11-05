//write a program to calculate the area and the circumference of a circle by using radius as the input provided by the user.
#include<stdio.h>
int main()
{
  float r,c,a;
  printf("The radius of circle is: ");
  scanf("%f",&r);
  printf("CIRCUMFERENCE =%f",2*3.14*r);
  printf("\nAREA =%f",3.14*r*r);
  return 0;
}
