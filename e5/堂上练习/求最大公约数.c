#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void q4();

int main()
{
    q4();
}


void q4()
{
    int m,n,p;
    scanf("%d,%d",&m,&n);
    int temp;
    if(n>m)
    {
        temp=n;
        n=m;
        m=temp;

    }
    while(n>0){
        p=m%n;
        m=n;
        n=p;
    }
    printf("%d",m);
}
