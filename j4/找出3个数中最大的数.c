#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{  int a,b,c,t;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b)
    {
        t=a;a=b;b=t;
    }
    if(a<c)
    {
        t=a;a=c;c=t;
    }
    printf("%d",a);
    return 0;
}
