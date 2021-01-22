
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{   double x,y;
     scanf("%lf",&x);
     if(x<10)
     {
         if(x>=1)
             y=2*x-1;
             else y=x;

     }else y=3*x-11;
    printf("%.2f",y);
    return 0;
}
