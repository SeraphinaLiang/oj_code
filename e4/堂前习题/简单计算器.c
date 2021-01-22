
#include<stdio.h>
#include<stdlib.h>
#include "math.h"
#include "string.h"

int main(){
    float a,b,c;
    char op;
    scanf("%f%c%f",&a,&op,&b);
    switch(op){
        case'+':
            c=a+b;break;
        case'-':
            c=a-b;break;
        case'*':
            c=a*b;break;
        case'/':
            c=a/b;break;
        default:printf("error");return 0;
    }
    printf("result=%.2f",c);
    return 0;

}