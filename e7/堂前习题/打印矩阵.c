
#include "stdio.h"

int main()
{
    int i,j;
    int ma[3][4];
    int na[4][3];

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&ma[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            na[j][i]=ma[i][j];
        }
    }


    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",na[i][j]);
        }
        printf("\n");
    }
    return 1;
}
