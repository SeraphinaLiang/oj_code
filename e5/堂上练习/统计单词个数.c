#include "stdio.h"

int main()
{
    char word[1000];
    char ch;
    int a=-1,con=1;
    for(int i=0;i<1000;i++)
    {
        scanf("%c",&ch);
        a++;
        if(ch=='\n'){break;}
        word[i]=ch;
    }
    for(int i=0;i<a;i++)
    {
        if((word[i]!=' ')&&(word[i+1]==' ')){con++;}
    }
    printf("%d",con);
    return 1;
}