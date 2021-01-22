
#include <stdio.h>
#include <string.h>
#include <math.h>

int nL=0, nN=0;

int statistics(char *s)
{
    int t=0;
   while(*s!='\0')
   {
       if((*s>='a'&&*s<='z')||(*s>='A'&&*s<='Z'))
        nL++;
       if(*s>='0'&&*s<='9')
        nN++;
        s++;
       if(*s==' ')  t++;
   } *s='\0';
   return t;
}

int main()
{
    char s[81];
    int nS;
    gets(s);
    nS = statistics(s);

    printf("%d %d %d\n", nL, nN, nS);
    return 0;
}
