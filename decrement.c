#include <stdio.h>
int main()
{
  int a=10,b,c;
  b=--a;
  printf("\nValue of a and b are a=%d b=%d",a,b);
  c=a--;
  printf("\nValue of a and c are a=%d c=%d",a,c);

  return 0;
}
