#include <stdio.h>
int main()
 {
    int n;
    int i=1;
    int count=0;
    printf("Enter number:");
    scanf("%d", &n); 
    
    while(i<=n)
    {
        if(n%i==0)
        {
            count+=1;
        }
        i+=1;
    }
    if(count==2)
    {
        printf("%d is prime number",n);
    }
    else
    {
        printf("%d is not prime number",n);
    }
    
    return 0;
}