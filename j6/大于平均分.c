
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{  int a[15],i,s=0,k=0;
   float t;
  for(i=0;i<10;i++)
  {
   scanf("%d",&a[i]);
   s=s+a[i];
   }
   t=s/10.0;
    for(i=0;i<10;i++)
    {
        if(a[i]>t)
        {
            k++;
        }
    }
    printf("%d",k);
    return 0;
}