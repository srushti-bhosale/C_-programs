#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=1; i<=100; i+=2)
    {
        sum+=i;
    }
    printf("Sum of odd numbers from 1 to 100 = %d", sum);
 return 0;
}