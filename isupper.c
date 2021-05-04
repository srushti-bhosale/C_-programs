#include <stdio.h>
#include<ctype.h>

int main()
{
  char c;
  c='C';
  printf("return value %c is passed to isupper():%d",c,isupper(c));
  c='+';
  printf("\nreturn value %c is passed to isupper():%d",c,isupper(c));
  return 0;
}