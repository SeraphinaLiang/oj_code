#include "stdio.h"

int main()
{
    int num[10];
    int a;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
    }
    a=num[0];
    for(int i=0;i<10;i++)
    {
        if(num[i]<a)
        {
            a=num[i];
        }
    }
    printf("%d",a);
    return 1;
}
