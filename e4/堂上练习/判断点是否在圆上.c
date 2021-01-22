#include<stdio.h>
#include<stdlib.h>
#include "math.h"
#include "string.h"

void circle(){
    float a,b;
    scanf("%f,%f",&a,&b);
    if(fabs(a*a+b*b-1)<1e-3)
       {
       printf("Y");
       }
       else{
           printf("N");
       }
}


int main(){
    circle();
    return 0;

}
