#include <stdio.h>

struct data
{
int num;
char name[20];
double score[3];
double ave;
};

int main()
{
    int i,j;
    struct data stu[10],tmp;
    for(i=0; i<10; i++)
    {
scanf("%d %s %lf %lf %lf",&stu[i].num,&stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
       stu[i].ave=stu[i].score[0]+stu[i].score[1]+stu[i].score[2];
    }
    for(i=0; i<9; i++)
        for(j=0; j<9-i; j++)
        {
          if(stu[j].ave<stu[j+1].ave)
            {
                tmp=stu[j];
                stu[j]=stu[j+1];
                stu[j+1]=tmp;
            }
        }
    for(i=0; i<10; i++)
    {
        printf("%d %s %.0lf %.0lf %.0lf\n", stu[i].num, stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2]);
    }
    return 0;
}