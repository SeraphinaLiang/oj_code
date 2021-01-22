#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   int i,a[10],j;
   for(i=0;i<10;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<10;i++)
   {
       for(j=0;j<10;j++)
       {
           if(a[j]==a[i]&&j!=i)
            a[j]=-1;
       }
       if(a[i]!=-1)
        printf("%d\n",a[i]);
   }
 return 0;
}