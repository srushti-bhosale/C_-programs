#include <stdio.h>
#include<math.h>
int main()
{
  float num;
  int result;
  printf("\nEnter first number:");
  scanf("%f",&num);
  result=floor(num);
  printf("Flooring integer of %f=%d",num,result);
  return 0;
}