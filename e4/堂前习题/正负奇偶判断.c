
#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num>0) printf("positive\n");
    else printf("negative\n");
    if(num%2==0) printf("even\n");
    else printf("odd\n");
    return 0;
}