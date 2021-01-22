#include <stdio.h>

void removeSpace(char *s)
{
int i=0,j=0;
while(s[i]!=0)
{s[j]=s[i];
 if(s[i]!=' ')
    j++;
    i++;
}
s[j]=0;
}

int main()
{
    char s[81];
    gets(s);
    removeSpace(s);
    printf("%s", s);
    return 0;
}