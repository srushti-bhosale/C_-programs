#include <stdio.h>

int main()
{
  int row,col,n;
  printf("enter no of lines=");
  scanf("%d",&n);
  for(row=n;row>=1;row--)
  {
    for(col=6;col>=row;col--)
    {
     printf ("%d ",col);
    }
  printf("\n");
  }
return 0;
}