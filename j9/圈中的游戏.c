
#include <stdio.h>
int c[1000000];

int main()
{
    int i, j, n, pre, cur;
    scanf("%d", &n);
    if(n==1) printf("1\n");
    else
    {
        for(i=0; i<n-1; i++) c[i]=i+1;
        c[n-1]=0;
        cur=n-1;
        for(i=0; i<n-1; i++)
        {
            for(j=0; j<3; j++)
            {
                pre = cur;
                cur=c[cur];
            }
            c[pre]=c[cur];
        }
        printf("%d", pre+1);
    }
    return 0;
}
