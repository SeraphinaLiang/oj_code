
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   char c,a,b;
    scanf("%c",&c);

      if(c>'0'&&c<'9')
       {
        a=c-1;
        b=c+1;
        printf("%c %c",a,b);}
    if (c=='0')

        printf("first 1");

        if(c=='9')
        printf("8 last");
         if(c<'0'||c>'9')
      printf("error");


    return 0;
}