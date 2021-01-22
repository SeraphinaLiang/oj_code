#include  "stdio.h"
main()
{   int i,j;
    char a[80], b[80];
    gets(a); gets(b);
    for(i=0;a[i]!='\0';i++)
    {    for(j=0;b[j]!='\0';j++)
             if(a[i+j]!=b[j]) break;
         if(b[j]=='\0') break;
    }
    if (a[i]!='\0') printf("%d",i+1);
    else printf("Not Found");
}