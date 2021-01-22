#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int i,s=0,t;
    char a[80],b[80],c[80];
    gets(a);
    t=strlen(a);
    for(i=0;i<=t;i++)
    {
       if(a[i]>='A'&&a[i]<='Z')
        s++;
    }
    gets(b);
    t=strlen(b);
    for(i=0;i<=t;i++)
    {
       if(b[i]>='A'&&b[i]<='Z')
        s++;
    }
    gets(c);
    t=strlen(c);
    for(i=0;i<=t;i++)
    {
       if(c[i]>='A'&&c[i]<='Z')
        s++;
    }
    printf("%d",s);
}