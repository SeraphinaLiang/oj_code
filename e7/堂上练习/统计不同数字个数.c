#include "stdio.h"
main()
{
    int num[1000],t,c=0;
    for(int i=0;i<1000;i++)
    {
        num[i]=0;
    }
    for(int i=0;i<20;i++)
    {
        scanf("%d",&t);
        num[t]=1;
    }
    for(int i=0;i<1000;i++)
    {
        if(num[i]==1) c++;
    }
    printf("%d",c);
    return 1;
}
