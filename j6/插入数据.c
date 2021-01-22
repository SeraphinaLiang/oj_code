

#include <stdio.h>
int a[16]={2, 3, 5, 7, 11, 13, 17, 23, 29, 31, 34, 71, 79, 97, 103};
void display()
{
    int i;
    for(i=0; i<16; i++) printf("%d ", a[i]);
}
int main()
{
int i,x,s=0,t;
   scanf("%d",&x);
   t=0;
   if(a[14]<x) a[15]=x;
   else
   {while(a[t]<x)
   {
       s++;
       t++;
   }
   for(i=16;i>s;i--)
   {
       a[i]=a[i-1];
   }
   a[t]=x;}
    display();
    return 0;
}