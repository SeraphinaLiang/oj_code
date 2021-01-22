#include "stdio.h"
main()
{
    int k;
    double a[1000],b[1000],c[1000],sum=0;
    b[0]=2;
    c[0]=1;
    for(int i=1;i<1000;i++)
    {
        c[i]=b[i-1];
        b[i]=c[i-1]+b[i-1];
    }
    for(int i=0;i<1000;i++)
    {
        a[i]=b[i]/c[i];
    }
    scanf("%d",&k);
    for(int i=0;i<k;i++)
    {
        sum+=a[i];
    }
    printf("%.4f",sum);
    return 1;
}