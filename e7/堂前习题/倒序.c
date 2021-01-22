#include "stdio.h"

int main()
{
    int num[10],t;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
    }
    for(int i=0;i<=4;i++)
    {
        t=num[i];
        num[i]=num[9-i];
        num[9-i]=t;
    }
     for(int i=0;i<10;i++)
    {
        printf("%d\n",num[i]);
    }
    return 1;
}