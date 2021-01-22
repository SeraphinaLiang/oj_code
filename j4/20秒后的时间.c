#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{   int h,m,s,sum;
    scanf("%d:%d:%d",&h,&m,&s);
    if(s>=40&&m==59&&h==23) {h=0;m=0;s=s-40;}
    else if(s>=40&&m==59) {h=h+1;m=0;s=s-40;}
    else if(s>=40) {m=m+1;s=s-40;}
    else if(s<40) s=s+20;
    printf("%02d:%02d:%02d",h,m,s);
    return 0;
}