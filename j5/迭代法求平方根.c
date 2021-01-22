#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{   float s,x1,x2,a;
    scanf("%f",&a);
    x1=10;
    x2=(x1+a/x1)/2;
    while(fabs(x2-x1)>=1E-5)
    {
        x1=x2;
        x2=(x1+a/x1)/2;
    }

    printf("%.4f",x2);
    return 0;
}
