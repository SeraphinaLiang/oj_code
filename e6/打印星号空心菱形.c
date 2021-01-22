
#include<stdio.h>
int main()
{
int i,j,k,line,m;
scanf("%d",&line);
m=(line+1)/2;
for(i=1;i<=m;i++)
{
for(k=0;k<m-i;k++)
{
printf(" ");
}
printf("*");
if(i==1){printf("\n");continue;}
for(j=0;j<2*i-3;j++)
{
printf(" ");
}
printf("*");
printf("\n");
}
for(i=m-1;i>0;i--)
{
for(k=0;k<m-i;k++)
{
printf(" ");
}
printf("*");
if(i==1){printf("\n");continue;}
for(j=0;j<2*i-3;j++)
{
printf(" ");
}
printf("*");
printf("\n");
}
return 0;
} 