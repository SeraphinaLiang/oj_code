#include <stdio.h>

struct DATE
{
int year;
int month;
int day;
};

int days(struct DATE date)
{
int sum;
    if((date.year%4==0&&date.year%100!=0)||date.year%400==0)
    {
      switch(date.month)
      {
      case 1:sum=date.day;break;
      case 2:sum=31+date.day;break;
      case 3:sum=60+date.day;break;
      case 4:sum=91+date.day;break;
      case 5:sum=121+date.day;break;
      case 6:sum=152+date.day;break;
      case 7:sum=182+date.day;break;
      case 8:sum=213+date.day;break;
      case 9:sum=244+date.day;break;
      case 10:sum=274+date.day;break;
      case 11:sum=305+date.day;break;
      case 12:sum=335+date.day;break;
      }return sum;
     }
     else
     {
     switch(date.month)
      {
      case 1:sum=date.day;break;
      case 2:sum=31+date.day;break;
      case 3:sum=59+date.day;break;
      case 4:sum=90+date.day;break;
      case 5:sum=120+date.day;break;
      case 6:sum=151+date.day;break;
      case 7:sum=181+date.day;break;
      case 8:sum=212+date.day;break;
      case 9:sum=243+date.day;break;
      case 10:sum=273+date.day;break;
      case 11:sum=304+date.day;break;
      case 12:sum=334+date.day;break;
      }
return sum;}
}

int main()
{
    struct DATE d;
    scanf("%d-%d-%d", &d.year, &d.month, &d.day);
    printf("%d", days(d));
}