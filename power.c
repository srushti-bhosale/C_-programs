#include <stdio.h>
#include<math.h>
int main()
{
  float num,r;
  printf("Enter a number:");
  scanf("%f",&num);
  r=pow(num,2);
  printf("Power of %f=%f",num, r);

  return 0;
}
