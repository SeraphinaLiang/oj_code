#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int g(int x){
    int result;
    if(x<2){
        result=x;
    }
    if(x>=2 && x%2==0){
        result= g(x/2)+1;
    }
    if(x>=2 && x%2!=0){
        result=x;
    }
    return result;
}

int f(int x){
    int result;
  if(x<2){
      result =x;
  }
  if(x>=2 && x%2==0){
      result= g(x/2)*2;
  }
  if(x>=2 && x%2!=0){
      result=g((x-1)/2);
  }
  
    return result;
}

int main()
{   int x;
    scanf("%d",&x);
    printf("%d",f(x));
    return 0;
}
