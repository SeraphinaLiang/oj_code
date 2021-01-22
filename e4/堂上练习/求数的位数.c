#include<stdio.h>
#include<stdlib.h>
int main()
{
   long num;
   int k=0;
   scanf("%d",&num);
   while(num)
   {
       num=num/10;
       k++;
   }
   printf("%d",k);
    return 0;
}
