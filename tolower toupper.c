#include <stdio.h>
#include<ctype.h>
int main()
{
  char c ;
  int result;
  c='S';
  result=tolower(c);
  printf("tolower(%c)=%c\n",c,result);
  c='a';
  result=toupper(c);
  printf("toupper(%c)=%c\n",c, result);
  return 0;
}
