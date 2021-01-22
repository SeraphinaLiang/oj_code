
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{   char s1[80],s2[80];
    int i,j,m1=0,m2=0,len1,len2;
    gets(s1);len1=strlen(s1);
    gets(s2);len2=strlen(s2);
    for(i=0;i<len1;i++)
    {
        m1=m1+s1[i];
    }
    for(i=0;i<len2;i++)
    {
        m2=m2+s2[i];
    }
    printf("%d",m1-m2);
    return 0;
}
