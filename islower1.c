#include <stdio.h>
#include<ctype.h>
int main()
{

  char ch;
  printf("enter any character\n");
  scanf("%c",&ch);
  if (islower(ch))
  printf("entered character is lowercase character");
  else
  printf("entered character is not lowercase character");
  return 0;

}
