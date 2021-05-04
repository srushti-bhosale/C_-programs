#include <stdio.h>
int main()
{
  int i=0;
  while(1)
  {
    printf("%d ",i);
    i++;
    if(i==10)
    break;
  }
  printf("Came out of while loop");
  return 0;
}
