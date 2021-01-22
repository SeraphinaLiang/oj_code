#include <stdio.h>

void input(int a[])
{
   int i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
}

void swap(int a[])
{
    int min,t=0,k,j,i,max;
    max=0;min=a[0];
    for(i=0;i<10;i++)
    {
        if(a[i]<min)
            {
                min=a[i];t=i;
            }
        if(a[i]>max)
        {
            j=i;
        }
    }
    min=a[t];
    a[t]=a[0];
    a[0]=min;
    k=a[9];
    a[9]=a[j];
    a[j]=k;
}

void display(int a[])
{
    int i;
    for(i=0; i<10; i++)
        printf("%d\n", a[i]);
}

int main()
{
    int a[10];
    input(a);
    printf("input done\n");
    swap(a);
    printf("swap done\n");
    display(a);
    printf("display done\n");
    return 0;
}