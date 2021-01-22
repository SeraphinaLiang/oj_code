#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{   int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            for(k=j+1;k<=n;k++)
            {
                if((i*i+j*j)==k*k&&((i+j)>k))
                    printf("%d %d %d\n",i,j,k);
            }
        }
    }

    return 0;
}
