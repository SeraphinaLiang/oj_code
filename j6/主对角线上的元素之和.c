
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{   int a[3][4],i,s,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    s=a[0][0]+a[1][1]+a[2][2];
    printf("%d",s);
    return 0;
}