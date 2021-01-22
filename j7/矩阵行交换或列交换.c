#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp=*a;*a=*b;*b=temp;
}

void col(int a[][4], int i, int j)
{
    int m;
	for(m  = 0; m < 4; m++)
	{
		swap(&a[m][i],&a[m][j]);
	}
}

void row(int a[][4], int i, int j)
{
    int m;
	for(m  = 0; m < 4; m++)
	{
		swap(&a[i][m],&a[j][m]);
	}
}

int main()
{
    int a[4][4];
    int i,j;
    for(i=0; i<4; i++)
        for(j=0; j<4; j++)
            scanf("%d", &a[i][j]);
    col(a,0,2);
    row(a,0,2);
    col(a,1,3);
    row(a,1,3);
    col(a,0,3);
    row(a,0,3);
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
