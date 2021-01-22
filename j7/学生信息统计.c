#include <stdio.h>

void average(double a[][5], int n)
{
int i,j;
   float s;
   for(i=0;i<n;i++)
   {  s=0.0;
       for(j=0;j<5;j++)
       {
           s=s+a[i][j];
       }
       s=s/5.0;
       printf("%.2f ",s);
   }printf("\n");
}

void average2(double a[][5], int n)
{
int i,j;
   float s;
   for(i=0;i<5;i++)
      {   s=0.0;
          for(j=0;j<n;j++)
          {
              s=s+a[j][i];
          }
          s=s/10.0;
          printf("%.2f ",s);
      }printf("\n");
}

void top(double a[][5], int n)
{
int i,j;
   float max;
   for(i=0;i<5;i++)
      {   max=a[0][i];
          for(j=0;j<n;j++)
          {
            if(a[j][i]>max)
            {
                max=a[j][i];
            }
            }
           printf("%.2f ",max);
}
}

int main()
{
    double a[10][5];
    int i, j;
    for(i=0; i<10; i++)
        for(j=0; j<5; j++)
            scanf("%lf", &a[i][j]);
    average(a,10);
    average2(a,10);
    top(a,10);
    return 0;
}
