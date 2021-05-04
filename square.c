#include<stdio.h>
#include<math.h>
int main()
{
 int n,t=0,r,q;
 printf("Enter a number:");
 scanf("%d",&n);
 q=n;
 do
 {
      r=q%10;
      t+=r*r;
      q=q/10;
 }
 while(q%10!=0);
 printf("The sum of squares of digits of a number %d=%d",n,t);
 return 0;


}
