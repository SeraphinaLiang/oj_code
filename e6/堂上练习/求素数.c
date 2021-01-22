
#include "stdio.h"

int main()
{
    int sign[200];
    int j;
    sign[0]=sign[1]=0;
    for(int i=2;i<200;i++)
    {
        sign[i]=1;
    }
    for(int i=3;i<200;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0){sign[i]=0;}
        }
    }
    for(int i=2;i<200;i++)
    {
        if(sign[i]==1){printf("%d\n",i);}
    }
    return 1;
}
