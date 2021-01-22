
#include "stdio.h"
main()
{
    int num[10000],t1,t2,t3;
    for(int i=0;i<10000;i++)
    {
        num[i]=0;
    }
    for(int i=0;i<10000;i++)
    {
        if(i%7==0){num[i]=1;}
    }
    for(int i=0;i<10000;i++)
    {
        if(num[i]==1)
        {
            t1=i%1000;
            t2=t1%100;t3=t2%10;
            if(i/1000==5)
            {
                num[i]=2;
            }
            else if(t1/100==5)
            {
                num[i]=2;
            }
            else if(t2/10==5)
            {
                num[i]=2;
            }
            else if(t3==5)
            {
                num[i]=2;
            }

        }
    }
    for(int i=0;i<10000;i++)
    {
        if(num[i]==2)
        {
            printf("%d\n",i);
        }
    }
    return 1;
}