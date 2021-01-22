#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void q3();

int main()
{
    q3();
}


void q3()
{
    char s[81];
    int i=0;

    char ch=getchar();
    while(ch!='\n')
    {
        s[i]=ch;
        i++;
        ch=getchar();
    }
    for(int j=0;j<i;j++){
        s[j]=tolower(s[j]);
    }
    for(int j=0;j<i;j++){
        putchar(s[j]);
    }

}
