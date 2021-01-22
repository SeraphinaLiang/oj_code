#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   float s,p,r,m,t;
   int n,i;
   scanf("%d",&n);
   s=100;t=100;
   if(n==1) printf("%.3f %.3f",t,t/2);
   else {for(i=2;i<=n;i++)
   {
     t=t/2;
       s=s+2*t;}
 printf("%.3f %.3f",s,t/2);
   }
}