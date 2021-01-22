include <stdio.h>
#include "math.h"

int main() {int num;
    int a[16];
    int i=1,j;
    scanf("%d",&num);
    for(j=0;j<16;j++)
    {
        i=num%2;
        num=num/2;
        a[j]=i;
    }
    int one=0;
    for(int k=0;k<16;k++){
        if(a[k]==1){
            one++;
        }
    }
    printf("%d",one);



    return 0;
}