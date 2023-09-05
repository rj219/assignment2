#include <stdio.h>
#include <conio.h>

int main()
{
  int a,b;
  float module;

  printf("Enter The value of a : ");
  scanf("%d",&a);

  printf("Enter The value of b : ");
  scanf("%d",&b);

  module=a%b;

  printf("The value of %d + %d is : %d\n",a,b,a+b);
  printf("The value of %d - %d is : %d\n",a,b,a-b);
  printf("The value of %d * %d is : %d\n",a,b,a*b);
  printf("The value of %d / %d is : %d\n",a,b,a/b);
  printf("The value of modulo is  : %f",module);


    return 0;
}