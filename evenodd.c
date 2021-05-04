#include <stdio.h>
int main()
{
  int a;
  printf("Enter a number:");
  scanf("%d",&a);
 (a%2==0)?printf("even number"):printf("odd number");
  
  return 0;
}