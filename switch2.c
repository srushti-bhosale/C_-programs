#include <stdio.h>

int main()
{
  int ch;
  printf("Enter any integer:");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1: printf("yellow");
            break;
    case 2: printf("blue");
            break;
    case 3: printf("black");
            break;
    case 4: printf("white");
            break;
    case 5: printf("green");
            break;
    default:printf("Invalid colour.");
  }
  return 0;
}
