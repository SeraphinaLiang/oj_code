#include<stdio.h>
int main()
{
   int a[10000],n,s=0;
   scanf("%d",&n);
   for(int i=0;i<10000;i++)
   {
       a[i]=2*i+1;
   }
   for(int j=0;j<n;j++)
   {
       s+=a[j];
   }
   printf("%d",s);
   return 0;
}
