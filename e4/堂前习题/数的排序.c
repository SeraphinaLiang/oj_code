#include<stdio.h>
int main()
{
    int a,b,c,t;
    char ch;
    scanf("%d",&a);
    ch=getchar();
    scanf("%d",&b);
    ch=getchar();
    scanf("%d",&c);
    ch=getchar();
    if(b<a)
    {
        t=a;
        a=b;
        b=t;
    }
    if(c<a)
    {
        t=a;
        a=c;
        c=t;
    }
    if(b>c)
    {
        t=c;
        c=b;
        b=t;
    }
    printf("%d,%d,%d",a,b,c);
    return 0;
}