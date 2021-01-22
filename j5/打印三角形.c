#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{   int n,i,t,j,k;
    scanf("%d",&n);
    for(t=1;t<=n;t++)
    {
        for(k=t;k<=n-1;k++) printf(" ");
        for(k=1;k<=t;k++) printf("*");printf("\n");
    }
    for(i=1;i<n;i++)
    {
        for(j=1;j<=i;j++) printf(" ");
        for(j=i;j<=n-1;j++)  printf("*");printf("\n");
    }

    return 0;
}