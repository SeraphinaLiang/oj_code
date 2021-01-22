#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,n,k;
    scanf("%d",&n);
    n-=1; 
    for (i=-n; i<=n; i++) {
        for (j=-n; j<=n; j++) {
            k=abs(i)+abs(j);
            if (k<=n) printf("%d",n-k+1);
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
