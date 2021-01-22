
#include <stdio.h>

int F(int x, int n)
{
    if(n==0) return 1;
    else return x*F(x,n-1);
}

int main()
{
    int x, n;
    scanf("%d%d", &x, &n);
    printf("%d", F(x, n));
    return 0;
}
