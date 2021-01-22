#include <stdio.h>
#include <stdlib.h>
#include "math.h"

int main() {

 float a[10];
    float min=100000000;
    for(int i=0;i<10;i++){
        scanf("%f",&a[i]);
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(i!=j){
                float temp=fabs(a[i]-a[j]);
                if (temp<min){
                    min=temp;
                }
            }
        }
    }
    printf("%.2f",min);

    return 0;
}
