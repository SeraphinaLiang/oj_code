
#include<stdio.h>
int main()
{
    int num[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&num[i]);
    }
    for(int i=0;i<5;i++)
    {
        if(num[i]%27==0)
        {
            printf("YES\n");
        }
        else printf("NO\n");
    }
    return 0;
}