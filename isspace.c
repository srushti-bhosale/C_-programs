#include <stdio.h>
#include<ctype.h>
int main()
{
  char ch;
  printf("enter any character\n");
  ch=getchar();
  if(isspace(ch))
  printf("\n entered character is space");
  else
  printf ("\n entered character is not space");
  return 0;
}
