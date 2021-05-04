#include <stdio.h>
#include<ctype.h>
int main()
{
  char ch;
  printf("enter any character\n");
  scanf("%c",&ch);
  if(isalpha(ch))
    printf("\n entered character is converted into lower character:%c\n",tolower(ch));
  else
    printf("entered character is not alphabetic");
  return 0;
}
