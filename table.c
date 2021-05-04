#include <stdio.h>

int main()
{
  int num,i=1;
  printf ("Enter the number for table:");
  scanf("%d",&num);
  table:
    printf("%d × %d = %d\n",num,i,num*i);
    i++;
    if(i<=10)
    goto table;
 return 0;
}