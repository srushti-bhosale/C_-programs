#include <stdio.h>
int addNumbers( );
int main()
{
  int sum;
  sum=addNumbers();
  printf("sum=%d",sum);
  return 0;
 }
 int addNumbers( )
 {
   int add;
   int n1,n2,n3;
   printf("enter three numbers:");
   scanf("%d %d %d",&n1,&n2,&n3);
   add=n1+n2+n3;
   return add;

 }

