#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{   char ch;
    int d=0,t=0,s=0,i=0;
    while((ch=getchar())!='\n')
    {
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
        s=s+1;
         else if(ch>='0'&&ch<='9')
        t=t+1;
        else if(ch==' ') d=d+1;
        else i++;
    }
    printf("%d %d %d %d",s,t,d,i);
    return 0;
}
