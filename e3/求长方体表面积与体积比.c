
#include<stdio.h>
#include<malloc.h>
int main()
{   double a,b,c;
    double de,mian,ti;
    scanf("%lf%lf%lf",&a,&b,&c);
    mian=2*(a*b+b*c+a*c);
    ti=a*b*c;
    de=mian/ti;
    printf("%.2f",de);
    return 0;
}