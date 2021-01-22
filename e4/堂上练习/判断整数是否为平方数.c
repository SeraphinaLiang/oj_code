#include<stdio.h>
#include<stdlib.h>
int main()
{
   int num;
   scanf("%d",&num);
   if(num==1) {printf("Y"); return 0;}
   for(int i=2;i<1000;i++)
   {
       if(num==i*i) {printf("Y"); return 0;}
   }
   printf("N");
    return 0;
}