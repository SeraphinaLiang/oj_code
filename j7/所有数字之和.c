

#include "stdio.h"

int sum(int n)
{
    int i,sum=0,k;
    while(n>0)
    {
        sum=sum+n%10;
        n=n/10;
    }
     return sum;
}

main()
{
    int n;
    scanf("%d", &n);
    printf("%d", sum(n));
}
