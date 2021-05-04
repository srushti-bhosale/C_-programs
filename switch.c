#include <stdio.h>
int main()
{
  int ch;
  printf("enter any integer:");
  scanf("%d",&ch);
    switch(ch)
    {
      case 1: printf("Icecream");
      break;
      case 2: printf("Cupcakes");
      break;
      default: printf("select valid option");
    }
  return 0;
}
