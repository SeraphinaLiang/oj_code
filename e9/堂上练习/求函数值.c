
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int jieguo(int t)
{
    int s;
    if(t<3) s=t;
    if(t>=3&&(t%3==0)) s=jieguo(t/3)*2;
    if(t>=3&&(t%3==1)) s=jieguo((t-1)/3)+1;
    if(t>=3&&(t%3==2)) s=jieguo((t-2)/3)+2;
 return s;
 }

int main()
{   int x;
    scanf("%d",&x);
    printf("%d",jieguo(x));
    return 0;
}
